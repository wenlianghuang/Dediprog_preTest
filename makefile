CC:=g++
CXXFLAGS=-g -m64 -O2 -Wall -std=c++14


.PHONY: Project clean clear
src=$(wildcard ./src/*.cxx)
directory=$(notdir $(src))
obj := $(patsubst %.cxx,%.o,$(directory))

all 	:	Project	

Project 	:	$(obj)
	$(CC) $^ -o $@
main.o	:	./src/main.cxx  
	$(CC) -c $(CXXFLAGS) $< -o $@ 
QuickSorting.o	:	./src/QuickSorting.cxx ./inc/QuickSorting.h
	$(CC) -c $(CXXFLAGS) $< -o $@
clean:clear

clear:
	rm -rf *.o

