#!/bin/sh
c++ 4.cpp
while read line
do
./a.out $line >> out4.txt
done < in4.txt
