#!/bin/bash

gcc test.c ./libft.a && chmod +x ./a.out && ./a.out

# gcc test.c -L . -lft -o prog.out \
#	&& chmod +x ./prog.out && ./prog.out
