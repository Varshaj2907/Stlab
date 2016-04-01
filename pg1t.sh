#!/bin/sh
c++ pg1.cpp
while read line
do
./a.out $line >> out2.txt
done <in2.txt
#read line
