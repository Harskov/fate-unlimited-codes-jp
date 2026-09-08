#!/usr/bin/env bash
INPUT="$(readlink -f "$1")"
OUTPUT="$(readlink -f "$3")"
cd '/sessions/rcw-01lgyt5hhslqkgzqg3bvcxum/mnt/Decompilation Assistant (PS2)/targets/fate-unlimited-codes-jp'
exec '/sessions/rcw-01lgyt5hhslqkgzqg3bvcxum/mnt/Decompilation Assistant (PS2)/targets/fate-unlimited-codes-jp/tools/wibo' '/sessions/rcw-01lgyt5hhslqkgzqg3bvcxum/mnt/Decompilation Assistant (PS2)/targets/fate-unlimited-codes-jp/tools/compilers/mwcps2-3.0.1b151-050317/mwccps2.exe' -c -O4,p -nostdinc -stderr -i include -i '/sessions/rcw-01lgyt5hhslqkgzqg3bvcxum/mnt/Decompilation Assistant (PS2)/targets/fate-unlimited-codes-jp/wip/func_001767B0' "$INPUT" -o "$OUTPUT"
