#!/bin/bash

cd $(dirname $0)
rm *.o *.so *.cxx map.py
swig -c++ -python converter.i
# compiling generated .cxx file
g++ -O2 -fPIC -I/usr/include/python3.8 -c converter_wrap.cxx -o converter_wrap.o
# compiling .cpp source
g++ -O2 -c map.cpp -o map.o
# linking .o files into executable shared library
g++ -shared -O2 -Wall converter_wrap.o map.o -o _map.so
