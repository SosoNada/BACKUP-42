#!/bin/bash

function B
{
	echo "Function B."
}
function A
{
	echo "$1"
}
function adder
{
	echo "$(($1 + $2))"
}

A "FUnction A."
B 
adder 12 56
