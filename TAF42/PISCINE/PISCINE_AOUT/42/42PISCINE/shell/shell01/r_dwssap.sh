#!/bin/bash

#cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | sed 's/:.*//g' | rev | sort -r | awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | tr '\n' "," | sed 's/,$/./' | sed 's/,/, /g'  

cat /etc/passwd | grep -v "^#" | awk 'NR%2==0' | cut -d : -f 1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' "," | sed 's/,$/./' | sed 's/,/, /g'

