#!/bin/sh
cat /etc/passwd | grep ':' | sed -n 'n;p' | cut -d: -f1 | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | tr "\n" "," | sed 's/,/, /g' | rev | cut -c2- | sed 's/,/./1' | rev | tr -d "\n"
