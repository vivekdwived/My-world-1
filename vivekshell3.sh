#!/bin/bash
#this is assignment 2 with output, tested by vivek in terminal
echo "what is your name:"
read name
echo your entered name is $name
mkdir $name
cd $name
for i in 1 2 3 4 5
do
touch $name$i.cpp
done
