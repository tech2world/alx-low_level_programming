#!/bin/bash
gcc -c *.o
ar -rc liball.a *.o
ranlib liball.a
