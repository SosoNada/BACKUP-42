#!/bin/bash

find . -exec git check-ignore {} + | xargs -I {} basename {}
#time find . | xargs git check-ignore | cut -c 3-
#time find . -exec git check-ignore {} + | cut -c 3- #plus rapide
#time git check-ignore $(find .) | cut -c 3-
#time find . -exec git check-ignore {} \; -exec basename {} \; | tail -n 1  
