#!/bin/bash

echo -e '#include <stdlib.h>\nint rand(void) { return 6; }' > /tmp/win.c
gcc -shared -fPIC -o /tmp/win.so /tmp/win.c
LD_PRELOAD=/tmp/win.so ./gm 9 8 10 24 75 9

