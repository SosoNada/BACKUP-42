#!/bin/bash 

COUNT=1

until [ $COUNT -gt 10 ] ; do
	echo "Value dde count es : $COUNT"
	COUNT=$((COUNT + 1))
done
