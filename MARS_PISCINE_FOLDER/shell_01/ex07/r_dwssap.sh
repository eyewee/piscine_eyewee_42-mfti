#!/bin/sh/
FT_LINE1=
FT_LINE2=
cat -e /etc/passwd | sed '/#/d' | sed '1!n;d' | cut -d ':' -f 1 | rev | sort -r | sed -n ${FT_LINE1},${FT_LINE2}p | sed 's:^\n:,:g' | tr '\n' ' ' | sed 's: :, :g' | sed 's:, $:.:g'
