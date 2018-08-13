#! /bin/bash
#this is a comment
echo "hello world"
#system variables
echo $BASH
echo $BASH_VERSION
echo $HOME
echo $PWD

#user variables 
echo "what is your name:"
read name
echo The name is $name
mkdir $name
cd $name
touch $name.cpp
