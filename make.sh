#!/bin/bash
g++ -O3 -c -o str.o str.cpp
g++ -O0 -c -o main.o main.cpp
g++ -o a.out main.o str.o
