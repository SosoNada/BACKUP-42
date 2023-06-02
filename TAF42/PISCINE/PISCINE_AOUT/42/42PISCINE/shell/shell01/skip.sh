#!/bin/bash

ls -l | sed 'n;d' 
#ls -l | sed '2!n,d'
#ls -l | sed -n 'n;p'

#ls -l | awk 'NR % 2'
#ls -l | awk 'NR % 2 == 1'
#ls -l | awk '{if(NR % 2)print}'
