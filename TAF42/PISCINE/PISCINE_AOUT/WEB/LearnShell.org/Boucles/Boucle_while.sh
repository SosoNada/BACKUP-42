#!/bin/bash

COUNT=4
while [ $COUNT -gt 0 ] ; do
	echo "Value de count is = $COUNT"
	COUNT=$(($COUNT - 1))
done
