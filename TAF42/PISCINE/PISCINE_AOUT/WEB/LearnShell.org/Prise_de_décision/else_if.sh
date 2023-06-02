#!/bin/bash

NAME="George"

if [ "$NAME" = "John" ]; then
	echo "John Lennon"
elif [ "$NAME" = "George" ]; then
	echo "George Harisson"
else
	echo "This leaves us with Paul and Ringo"
fi
