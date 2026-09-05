# Calibration candidates — Fate/Unlimited Codes (Japan) SLPM_551.08

Scanned 1057856 words from 0x00100000; 7770 function starts after `jr $ra`; 406 leaf candidates; 10 chosen.

Write `calibration/<name>/attempt.c` for each (a C function named exactly `<name>`, no globals; arguments in $a0..$a3, result in $v0).

## func_00121558 (15 instructions, frame=True, branches=4, fpu=False)

```
  00121558  27BDFFF0  addiu       $sp, $sp, -0x10
  0012155C  03A0182D  daddu       $v1, $sp, $zero
  00121560  10C00005  beqz        $a2, .L00121578
  00121564  00A5180B  movn        $v1, $a1, $a1
  00121568  54E00005  bnel        $a3, $zero, .L00121580
  0012156C  90C20000  lbu         $v0, 0x0($a2)
  00121570  10000006  b           .L0012158C
  00121574  2402FFFF  addiu       $v0, $zero, -0x1
.L00121578:
  00121578  10000004  b           .L0012158C
  0012157C  0000102D  daddu       $v0, $zero, $zero
.L00121580:
  00121580  AC620000  sw          $v0, 0x0($v1)
  00121584  90C20000  lbu         $v0, 0x0($a2)
  00121588  0002102B  sltu        $v0, $zero, $v0
.L0012158C:
  0012158C  03E00008  jr          $ra
  00121590  27BD0010  addiu       $sp, $sp, 0x10
```

## func_00100350 (13 instructions, frame=False, branches=2, fpu=False)

```
  00100350  10A0000A  beqz        $a1, .L0010037C
  00100354  24A2FFFF  addiu       $v0, $a1, -0x1
  00100358  2403FFFF  addiu       $v1, $zero, -0x1
  0010035C  00000000  nop
.L00100360:
  00100360  A0800000  sb          $zero, 0x0($a0)
  00100364  2442FFFF  addiu       $v0, $v0, -0x1
  00100368  24840001  addiu       $a0, $a0, 0x1
  0010036C  00000000  nop
  00100370  00000000  nop
  00100374  1443FFFA  bne         $v0, $v1, .L00100360
  00100378  00000000  nop
.L0010037C:
  0010037C  03E00008  jr          $ra
  00100380  00000000  nop
```

## func_001175A8 (21 instructions, frame=False, branches=6, fpu=False)

```
  001175A8  8C830040  lw          $v1, 0x40($a0)
  001175AC  8C6201C8  lw          $v0, 0x1C8($v1)
  001175B0  54400001  bnel        $v0, $zero, .L001175B8
  001175B4  AC400028  sw          $zero, 0x28($v0)
.L001175B8:
  001175B8  8C6201D8  lw          $v0, 0x1D8($v1)
  001175BC  54400001  bnel        $v0, $zero, .L001175C4
  001175C0  AC400028  sw          $zero, 0x28($v0)
.L001175C4:
  001175C4  8C6201E8  lw          $v0, 0x1E8($v1)
  001175C8  54400001  bnel        $v0, $zero, .L001175D0
  001175CC  AC400028  sw          $zero, 0x28($v0)
.L001175D0:
  001175D0  8C6201CC  lw          $v0, 0x1CC($v1)
  001175D4  54400001  bnel        $v0, $zero, .L001175DC
  001175D8  AC400028  sw          $zero, 0x28($v0)
.L001175DC:
  001175DC  8C6201DC  lw          $v0, 0x1DC($v1)
  001175E0  54400001  bnel        $v0, $zero, .L001175E8
  001175E4  AC400028  sw          $zero, 0x28($v0)
.L001175E8:
  001175E8  8C6201EC  lw          $v0, 0x1EC($v1)
  001175EC  54400001  bnel        $v0, $zero, .L001175F4
  001175F0  AC400028  sw          $zero, 0x28($v0)
.L001175F4:
  001175F4  03E00008  jr          $ra
  001175F8  24020001  addiu       $v0, $zero, 0x1
```

## func_001319A0 (10 instructions, frame=False, branches=2, fpu=False)

```
  001319A0  34028000  ori         $v0, $zero, 0x8000
  001319A4  0002113C  dsll32      $v0, $v0, 4
  001319A8  00621024  and         $v0, $v1, $v0
  001319AC  10400003  beqz        $v0, .L001319BC
  001319B0  24020001  addiu       $v0, $zero, 0x1
  001319B4  10000002  b           .L001319C0
  001319B8  ACA20000  sw          $v0, 0x0($a1)
.L001319BC:
  001319BC  ACA00000  sw          $zero, 0x0($a1)
.L001319C0:
  001319C0  03E00008  jr          $ra
  001319C4  FCA30010  sd          $v1, 0x10($a1)
```

## func_00141828 (14 instructions, frame=False, branches=2, fpu=False)

```
  00141828  8C820018  lw          $v0, 0x18($a0)
  0014182C  AC800038  sw          $zero, 0x38($a0)
  00141830  14400003  bnez        $v0, .L00141840
  00141834  AC800050  sw          $zero, 0x50($a0)
  00141838  10000002  b           .L00141844
  0014183C  24020003  addiu       $v0, $zero, 0x3
.L00141840:
  00141840  24020002  addiu       $v0, $zero, 0x2
.L00141844:
  00141844  A0820001  sb          $v0, 0x1($a0)
  00141848  24020001  addiu       $v0, $zero, 0x1
  0014184C  A0800002  sb          $zero, 0x2($a0)
  00141850  AC800028  sw          $zero, 0x28($a0)
  00141854  AC80002C  sw          $zero, 0x2C($a0)
  00141858  03E00008  jr          $ra
  0014185C  A082004B  sb          $v0, 0x4B($a0)
```

## func_00153BE8 (23 instructions, frame=False, branches=4, fpu=False)

```
  00153BE8  54A00009  bnel        $a1, $zero, .L00153C10
  00153BEC  8CA50000  lw          $a1, 0x0($a1)
.L00153BF0:
  00153BF0  00000000  nop
  00153BF4  00000000  nop
  00153BF8  00000000  nop
  00153BFC  00000000  nop
  00153C00  00000000  nop
  00153C04  1000FFFA  b           .L00153BF0
  00153C08  00000000  nop
  00153C0C  00000000  nop
.L00153C10:
  00153C10  18A0000A  blez        $a1, .L00153C3C
  00153C14  00000000  nop
  00153C18  24A5FFFF  addiu       $a1, $a1, -0x1
  00153C1C  00000000  nop
.L00153C20:
  00153C20  00000000  nop
  00153C24  00000000  nop
  00153C28  00000000  nop
  00153C2C  00000000  nop
  00153C30  00000000  nop
  00153C34  54A0FFFA  bnel        $a1, $zero, .L00153C20
  00153C38  24A5FFFF  addiu       $a1, $a1, -0x1
.L00153C3C:
  00153C3C  03E00008  jr          $ra
  00153C40  00000000  nop
```

## func_001619C0 (15 instructions, frame=False, branches=4, fpu=False)

```
  001619C0  8C830060  lw          $v1, 0x60($a0)
  001619C4  5060000B  beql        $v1, $zero, .L001619F4
  001619C8  2402FFFF  addiu       $v0, $zero, -0x1
  001619CC  04A20009  bltzl       $a1, .L001619F4
  001619D0  2402FFFF  addiu       $v0, $zero, -0x1
  001619D4  84620000  lh          $v0, 0x0($v1)
  001619D8  00A2082A  slt         $at, $a1, $v0
  001619DC  54200003  bnel        $at, $zero, .L001619EC
  001619E0  00051040  sll         $v0, $a1, 1
  001619E4  10000003  b           .L001619F4
  001619E8  2402FFFF  addiu       $v0, $zero, -0x1
.L001619EC:
  001619EC  00431021  addu        $v0, $v0, $v1
  001619F0  84420002  lh          $v0, 0x2($v0)
.L001619F4:
  001619F4  03E00008  jr          $ra
  001619F8  00000000  nop
```

## func_00177B00 (8 instructions, frame=False, branches=1, fpu=False)

```
  00177B00  8C820000  lw          $v0, 0x0($a0)
  00177B04  50400004  beql        $v0, $zero, .L00177B18
  00177B08  0000102D  daddu       $v0, $zero, $zero
  00177B0C  8C430000  lw          $v1, 0x0($v0)
  00177B10  24420004  addiu       $v0, $v0, 0x4
  00177B14  AC830000  sw          $v1, 0x0($a0)
.L00177B18:
  00177B18  03E00008  jr          $ra
  00177B1C  00000000  nop
```

## func_001990C0 (14 instructions, frame=False, branches=3, fpu=False)

```
  001990C0  8C830010  lw          $v1, 0x10($a0)
  001990C4  34630004  ori         $v1, $v1, 0x4
  001990C8  AC830010  sw          $v1, 0x10($a0)
  001990CC  8C830000  lw          $v1, 0x0($a0)
  001990D0  30630020  andi        $v1, $v1, 0x20
  001990D4  54600003  bnel        $v1, $zero, .L001990E4
  001990D8  8C830010  lw          $v1, 0x10($a0)
.L001990DC:
  001990DC  10000004  b           .L001990F0
  001990E0  00000000  nop
.L001990E4:
  001990E4  34630080  ori         $v1, $v1, 0x80
  001990E8  1000FFFC  b           .L001990DC
  001990EC  AC830010  sw          $v1, 0x10($a0)
.L001990F0:
  001990F0  03E00008  jr          $ra
  001990F4  00000000  nop
```

## func_001A4960 (13 instructions, frame=False, branches=2, fpu=False)

```
  001A4960  84820228  lh          $v0, 0x228($a0)
  001A4964  00A2102A  slt         $v0, $a1, $v0
  001A4968  14400003  bnez        $v0, .L001A4978
  001A496C  24830220  addiu       $v1, $a0, 0x220
  001A4970  10000006  b           .L001A498C
  001A4974  0000102D  daddu       $v0, $zero, $zero
.L001A4978:
  001A4978  8C620004  lw          $v0, 0x4($v1)
  001A497C  000518C0  sll         $v1, $a1, 3
  001A4980  00651823  subu        $v1, $v1, $a1
  001A4984  00031880  sll         $v1, $v1, 2
  001A4988  00431021  addu        $v0, $v0, $v1
.L001A498C:
  001A498C  03E00008  jr          $ra
  001A4990  00000000  nop
```

