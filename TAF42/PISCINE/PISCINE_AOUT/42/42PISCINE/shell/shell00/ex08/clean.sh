#!/bin/bash

find . -type f \( -name "*~" -or -name "#*#" \) -print -delete
