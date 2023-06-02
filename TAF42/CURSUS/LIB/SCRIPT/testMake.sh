#!/bin/bash

rm *.o 2>/dev/null
gcc -o testProg.out ../mainStrlcpy.c ./libft.a && ./testProg.out "monmousseau 94200"
