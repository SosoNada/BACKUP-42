#!/bin/bash

COUNT=0

while [ $COUNT -lt 10 ] ; do
	COUNT=$(($COUNT + 1))

	# check if double

	if [ $(($COUNT % 2)) = 0 ] ; then
		continue
	fi
	echo $COUNT
done
