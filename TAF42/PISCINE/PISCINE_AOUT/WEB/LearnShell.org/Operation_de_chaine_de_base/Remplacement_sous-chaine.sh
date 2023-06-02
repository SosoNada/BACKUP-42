#!/bin/bash

STRING="to be or not to be"
echo ${STRING[@]/be/eat}
echo ${STRING[@]//be/eat}
echo ${STRING[@]//not}
echo ${STRING[@]/#to be/eat now}
echo ${STRING[@]/%be/eat}
echo ${STRING[@]/%be/be on `date +%Y-%m-%d`}
