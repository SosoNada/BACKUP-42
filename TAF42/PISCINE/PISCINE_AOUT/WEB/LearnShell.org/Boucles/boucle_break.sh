#!/bin/bash

COUNT=0

while [ $COUNT -ge 0 ] ; do
	echo "Value is = $COUNT"
	COUNT=$((COUNT + 1))
	if [ $COUNT -ge 5 ] ; then
		break
	fi
done
