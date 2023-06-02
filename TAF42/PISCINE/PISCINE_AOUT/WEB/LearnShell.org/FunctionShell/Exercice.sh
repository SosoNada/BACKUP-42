#!/bin/bash

function ENGLISH_CALC
{
	if [ $2 = plus ] ; then
		echo "$1 + $3 = $(($1 + $3))"
	elif [ $2 = minus ] ; then
		 echo "$1 - $3 = $(($1 - $3))"
	elif [ $2 = times ] ; then
		 echo "$1 * $3 = $(($1 * $3))"
	fi
}

ENGLISH_CALC 3 plus 5
ENGLISH_CALC 5 minus 1
ENGLISH_CALC 4 times 6
