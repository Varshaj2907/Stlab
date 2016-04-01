#!/bin/sh
c++ 4.cpp
while read line
do
./a.out $line >> out5.txt
done < in5.txt
