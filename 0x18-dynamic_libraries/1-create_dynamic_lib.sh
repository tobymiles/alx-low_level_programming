#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
done
gcc -shared -o libdynamic.so *.o
rm *.o
