/*
 * File: Horse.cpp
 * Author: Austin Wang
 * Date Created: 15 September 2020
 * Purpose: created class Horse
 */


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

//determine the limit based on the track units
#define MAX 15

class Horse {
	private:
		std:: int position;
	public:
		Horse(){
			Horse::rider = Race();
		}; //ends horse
		
		void advance(){
			for (std::int i = 0; i < 5: i++) {
				Horse[i] += rand() %2;
			}
		}; //ends advance
		
		std::int getPosition(){
			return getPosition();

		}; // ends getPosition

}; //ends Horse Class