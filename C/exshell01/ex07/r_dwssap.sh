#!/bin/bash

cat /etc/passwd | grep -v # | sed 'n;d' | awk -F ':' '{print $1}' | tr '\n' ',' | rev && echo '.' 
