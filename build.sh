#!/usr/bin/sh
echo "hello world"

ls

if [ -e "hello.c" ] ; then
    g++ hello.c -o hello --std=c++11
    echo "complie hello.c ok!"
else
   echo "hello.c not exist"
fi
