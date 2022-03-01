/*
 * File: Race.cpp
 * Author: Austin Wang
 * Date Created: 15 September 2020
 * Purpose: created class Race
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

class Race {
	private:
		std::int length;
		std::Horse[h];
	public:
		Race(){
			Race::
		};
		
		Race(std::int length){
			std::int length = 15;
			
		};
		
		void printLane(std::int horseNum){
		
			for (std::int h = 0; h < 5; h++){
				std::int four = Horse[h];
				for (std::int j = 0; j < four; j++) {
					std::cout << ".";
					};
				std::cout << h;
				for (std::int k = 0; k < (MAX - four); k++) {
					std::cout << ".";
					};
				std::cout << std::endl;

		};
		void start(){
			//to obtain an user input
     			std::cout << "Please Enter a Random Seed: " << std::endl;
    			//seeding random generator that will truly provide a random order
     			std::srand(seed);
    			//store the user input
    			std::cin >> seed ;
		};
