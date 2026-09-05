import json, datetime
base='targets/fate-unlimited-codes-jp'
RUN='2026-09-05-005-segment-map'
x=json.load(open(f'{base}/runs/{RUN}/work/xref.json'))
refs={k:[int(v) for v in vs] for k,vs in x['refs'].items()}

SEGS=[
 ("crt0","game",0x00100000,0x00100230,[
   "entry 0x00100008 (config/target.json elf_header.entry); func_00100008 is a 0x210-byte padduw $reg,$zero,$zero register-clear prologue — handwritten startup, not compiler output",
   "fingerprint window 0x00100000-0x00110000 mw_move=0 gcc_move=1510 (config/fingerprint.json)"]),
 ("sdk_dma_graph","sdk",0x00100230,0x00104038,[
   "libdma error strings 0x004E2000 'libdma: sync timeout' referenced by func_00100230/2A0/3B0/490/C80",
   "libgraph strings 0x004E2080-0x004E2328 (sceGsDefDispEnv/sceGsPutDrawEnv/sceGsSyncPath) referenced by func_00100D30/101520/101998/101DF0",
   "D1_TADR=%08x / D1_MADR=%08x and rom0:ROMVER referenced from this range",
   "PsIIlibdma 3100 / PsIIlibgraph3100 stamps at 0x003B0380 / 0x003B03C0"]),
 ("sdk_kernel","sdk",0x00104038,0x00107800,[
   "SceKerneltopThread, SceKernelDelayThread, 'TTY: receive error' referenced by func_00104038 window",
   "SceSifrpcGod/Bind/Call referenced by func_00106E88/107150/107330",
   "PsIIlibkernl3100 stamp at 0x003B048F"]),
 ("sdk_stdio","sdk",0x00107800,0x0010C1C0,[
   "24 functions 0x00107A60-0x0010B4B8 reference the SceStdio*Sema block 0x004E2740-0x004E29D8 (fileio semaphore names)",
   "boundary placed at the nearest function starts around that reference span"]),
 ("sdk_loadfile","sdk",0x0010C1C0,0x0010E080,[
   "'rom0:UDNL ', '# TLB over flow (1)/(2)' referenced from the 0x0010C000 window (loadfile / TLB handlers)"]),
 ("sdk_mc","sdk",0x0010E080,0x00111740,[
   "sceMc_sema_regs / sceMc_sema_timer / sceMc_read_fast_thread (0x004E2AD8-0x004E2BA8) referenced by func_0010F730..func_00111098",
   "'libmc: too old release of mcman.irx' in target.json library_markers; PsIIlibmc 3100 stamp at 0x003B1B88"]),
 ("sdk_ipu","sdk",0x00111740,0x0011B470,[
   "25 functions 0x001118C8-0x00118248 reference the IPU/MPEG diagnostic block 0x004E2C00-0x004E3100 ('_sceMpegSliceA0(): error happens', 'Too many macroblocks in picture', 'Error code detected(BDEC)')",
   "PsIIlibipu 3100 stamp at 0x003B0410"]),
 ("sdk_pad_scf","sdk",0x0011B470,0x0011E260,[
   "libpad strings 0x004E31A0-0x004E3240 ('libpad: Module version mismatch ', 'libpad: sceSifSetDma faild') referenced by func_0011BA48..func_0011C0B0",
   "rom0:ROMVER referenced from the 0x0011C000 window (libscf); PsIIlibpad 3100 / PsIIlibscf 3100 / PsIIlibsdr 3100 stamps at 0x003B1E60-0x003B1EE0"]),
 ("libc","libc",0x0011E260,0x0012E040,[
   "printf machinery: 'Infinity' referenced from the 0x0011E000 window; '0123456789abcdef' and the zero-pad literal '0000000000000000Inf' referenced from the 0x00126000 window",
   "no game string references anywhere in the range"]),
 ("libm","libc",0x0012E040,0x00133050,[
   "libm entry points name themselves for errno/matherr: 'log10' func_0012EB98, 'acosf' func_0012F110, 'asinf' func_0012F210, 'atan2f' func_0012F310, 'fmodf' func_0012F438, 'powf' func_0012F578, 'sqrtf' func_0012FA80"]),
 ("cri_adx","sdk",0x00133050,0x00158030,[
   "CRI Middleware ADX/Sofdec: 'CRI-MW' func_00135138; 'E1060101 ADXB_DecodeHeaderAdx: ' func_00135450; adxstmf_stat_exec / ADXM: / SRD: / HTCI: / DVCI: / PS2RNA: / DTR_ error tags",
   "118 functions in 0x00135450-0x00155340 reference the CRI diagnostic string block; 'FORM'/'AIFF' func_00133E58 and '.snd' func_00134770 at the head",
   "'MARK:adxt_obj' at 0x003B6728 (CRI object marker in data)"]),
 ("game_00","game",0x00158030,0x002A6078,[
   "game asset paths and UI: 'cmn/%02d%02d', '2d/game/%02d%02d', '2d/chrsel/%02d%02d', '2d/title/%02d%02d' (0x001C0000 window); 'fpack/2d/cmn/0000.fpk', 'font/0000' (0x00210000 window); 'host0:data/', 'KAGEShape', 'msh_KAGE'",
   "IRX loading: cdrom0:\\MODULES\\LIBSD.IRX;1 / MODHSYN.IRX / MODMIDI.IRX and 'snd/se/' referenced from the 0x00250000 window",
   "no SDK or CRI string reference in the range"]),
 ("game_render","game",0x002A6078,0x002E6040,[
   "3D renderer cluster: 'control point out of range', 'default ink name', 'default paint name', 'Incompatible toon ink stream version' (0x002A0000 window); 'FastIm3DTransform', 'PS2AllMatProcessInitData; %s cluster h', 'Normal', '!UNKNOWN!' (0x002C0000 window); 'Only rendering sub system', 'Invalid projection type specified', 'Invalid combination type' (0x002D0000-0x002E0000 windows)",
   "11 functions 0x002A6A78-0x002E6050 carry the renderer strings; typed game (not sdk) because the evidence does not show a third-party binary library"]),
 ("game_01","game",0x002E6040,0x003536B0,[
   "front-end and match UI: 'PRESS 1P START BUTTON', 'PLEASE WAIT', '%3dWIN'/'%3dWINS' (0x00330000 window); 'KEY REPLAY', '  [REC]    %4d/%-4d', '  [PLAY]   %4d/%-4d', '99999', '%3dHIT' (func_00346060/00346B30/00347290)",
   "'Heap resized from %d to %d bytes' referenced from the 0x00310000 window"]),
 ("sdk_cdvd","sdk",0x003536B0,0x00354148,[
   "libcdvd: 'SceCdCallbackThread' func_003537D0; 'SceCdNcmdSema'/'SceCdScmdSema'/'SceCdRcmdSema' func_003539F8 (0x00507348 band)",
   "PsIIlibcdvd 3100 stamp at 0x004DA440 — the only PsII stamp outside the 0x003B0380-0x003B1EE0 block, consistent with libcdvd being linked after the game objects",
   "boundaries are the nearest function starts to that cluster: 0x003536B0 opens a run of small library-shaped functions after the 0x0034EA40->0x00351EF0 gap; 0x00354148 is where the string evidence stops. Deliberately conservative — an over-wide sdk segment would park game functions as library"]),
 ("game_02","game",0x00354148,0x0036EB30,[
   "no string evidence in the range; typed game because it lies between game_01 and game_model and nothing marks it as library code"]),
 ("game_model","game",0x0036EB30,0x00384580,[
   "character model / bone name cluster: 92 functions 0x0036EB30-0x00384130 reference bone-name literals 'skirtbr','skirtfr','skirtbl','skirtfl','hairr','hairl','hairb','coatbr','coatr','wearfr','mantr','sodetrd','swordhimo','armorb'",
   "text ends at func_00384550 (endlabel 0x0038455C) followed by nops to 0x00384580"]),
 ("data_00","data",0x00384580,0x003B0000,[
   "first dlabel after the text: D_00384580 (asm/main.s); dense non-zero binary, ~20% printable, zero strings of length >=5 across 0x00384000-0x003B0000",
   "fingerprint windows 0x00380000-0x003B0000 class data, invalid-word counts 5654/6197/6498 (config/fingerprint.json ranges)"]),
 ("data_sdk","data",0x003B0000,0x003D3000,[
   "SDK library version stamps PsIIlibdma/libgraph/libipu/libkernl/libmc/libpad/libscf/libsdr 3100 at 0x003B0380-0x003B1EE0, plus 'MARK:adxt_obj' at 0x003B6728",
   "0x003B3000-0x003D3000 is 99-100% zero words — the initialized-zero tail of this region; the boundary at 0x003D3000 is where non-zero data resumes",
   "fingerprint classed the 0x003B0000-0x003C0000 window 'gcc' — a false signal: the last function in the image starts at 0x00384550, so no code exists here"]),
 ("data_01","data",0x003D3000,0x004E2000,[
   "dense constant tables, 9-16% zero words, ~18% printable, no strings until 0x004D4000; the 0x004D8000-0x004E2000 tail is sparser and carries the PsIIlibcdvd stamp at 0x004DA440",
   "fingerprint windows 0x003D0000-0x004E0000 all class data with invalid-word counts 6965-10340"]),
 ("rodata_str","rodata",0x004E2000,0x00509100,[
   "string-dense read-only block: 70-85% printable per 16 KB from 0x004E4000, ~3500 strings of length >=5; holds the SDK diagnostic block 0x004E2000-0x004E3400 and the game/CRI message tables",
   "'Append: GCC2096 SCE3100' at 0x004E5719/0x004E5F6A/0x004E6F3C (target.json sdk.append_lines)",
   "ends at filesz: vaddr 0x00100000 + 0x00409100"]),
 ("bss","bss",0x00509100,0x00536280,[
   "LOAD segment memsz 0x00436280 - filesz 0x00409100 = 0x0002D180 (config/target.json program_headers[0])"]),
]

segments=[]
for name,kind,start,end,ev in SEGS:
    s={"name":name,"kind":kind,"start":f"0x{start:08X}","end":f"0x{end:08X}","evidence":ev}
    if kind in ("data","rodata"):
        rf=sorted((f for f,rs in refs.items() if any(start<=r<end for r in rs)),
                  key=lambda n:int(n[5:],16))
        s["referencing_functions"]=rf
        s["migrated"]=False
    elif kind!="bss":
        s["consolidated"]=False
    segments.append(s)

# contiguity check
prev=None
for s in segments:
    st=int(s["start"],16); en=int(s["end"],16)
    assert en>st, s["name"]
    if prev is not None: assert st==prev, (s["name"], hex(st), hex(prev))
    prev=en
assert int(segments[0]["start"],16)==0x00100000
assert prev==0x00536280
out={"provisional":False,"written_at":datetime.datetime.now(datetime.timezone.utc).strftime('%Y-%m-%dT%H:%M:%SZ'),
     "source_run":RUN,"segments":segments}
json.dump(out,open(f'{base}/ledger/segments.json','w'),indent=1)
for s in segments:
    n=len(s.get("referencing_functions",[]))
    print(f'{s["name"]:14} {s["kind"]:7} {s["start"]}..{s["end"]}  refs={n}')
