#!/bin/bash

#time ifconfig | grep 'ether' | sed 's/ether//g' | tr -d ' ' | cut -b 1-17
#time ifconfig | grep -o -E '([[:xdigit:]]{2}:){5}[[:xdigit:]]{1,2}'
ifconfig | grep -o -E '([[:xdigit:]]{2}:){5}..' 
#time ifconfig -a | grep -ioE '([a-z0-9]{2}:){5}..'
#time ifconfig | grep ether | grep -o '..:..:..:..:..:..'
