#!/bin/bash

git status --ignored -s | grep '!!' | sed 's/!!//'

git status --ignored -s | grep -v '??' | sed 's/!!//'

git status --ignored --porcelain | grep '!!' | sed 's/!!//'

git status --ignored -s | grep '!!' | cut -c 4-
