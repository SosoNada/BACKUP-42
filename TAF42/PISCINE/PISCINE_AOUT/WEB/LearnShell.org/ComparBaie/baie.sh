#!/bin/bash

a=(3 12 8 10 6) 
b=(6 5 4 12) 
c=(14 12 5 7)

for x in ${a[@]} ; do
	for y in ${b[@]} ; do
		if [ "$y" = "$x" ] ; then 
			z+=("$x")
		fi
	done
done
for i in ${c[@]} ; do
	for k in ${z[@]} ; do
		if [ $i = $k ] ; then
			j+=($i)
		fi
	done
done
echo ${j[@]}
