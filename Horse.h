//horse.h
#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

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

#include "race.h"

class Horse {
	private:
		std::int position;
	public:
		Horse();
		void advance();
		std::int getPosition();

}; //end of class def