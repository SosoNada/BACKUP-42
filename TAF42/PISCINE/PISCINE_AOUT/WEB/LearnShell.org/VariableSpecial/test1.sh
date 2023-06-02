#!/bin/bash

echo "Script name : $0"

function func {
	for var in $*
	do
		let "i++"
		echo "The \$${i} argument is : ${var}"
	done
	echo "Total count of arguments : $#"
}

func sofiane cheriet
