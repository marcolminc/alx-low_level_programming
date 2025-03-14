#!/bin/bash
gcc -std=gnu89 *.c
ar rcs liball.a *.o
