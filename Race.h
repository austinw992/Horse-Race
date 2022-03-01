//race.h
#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

//defines the standard input output stream objects
#include <iostream>
//allows the use of general purpose functions such as random number generators
#include <cstdlib>
//allows the program to access the time of the computer
#include <ctime>
//allows the uses of basic string handling templates
#include <string>
//used to work on strings
#include <sstream>

class Race {
	private:
		std::int length;
		std::Horse[] h;
	public:
		Race();
		Race(std::int length);
		void printLane(std::int horseNum);
		void start();

}; end of class def