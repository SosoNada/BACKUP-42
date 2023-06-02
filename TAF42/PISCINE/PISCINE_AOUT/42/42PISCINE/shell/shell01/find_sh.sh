#!/bin/bash

#find . -type f -name "*sh" -exec basename {} \; | sed 's/.sh//g'
#find . -type f -name "*.sh" -exec basename -s .sh {} \;
#find . -type f -name "*.sh" -exec basename {} .sh \;
#find . -type f -name '*.sh' | sed 's/.*\///' | sed 's/...$//'
#find . -name '*.sh' | rev | cut -c 4- | cut -d '/' -f 1 | rev
#find . -name '*.sh' | sed 's#./##' | sed 's#\.sh##'
#find . -name '*.sh' | sed 's,^./,,g' | sed 's,.sh$,,g'
#find . -type f -name \*.sh | xargs basename -a  -s .sh
find . -type f -name '*sh' | sed 's/.sh$//g' | xargs -n 1 basename
