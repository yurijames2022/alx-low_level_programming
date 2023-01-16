#!/bin/sh

gcc -c *.c
ar csr liball.a *.o
