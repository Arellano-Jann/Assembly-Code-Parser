#include <iostream>
#include <iomanip>
#include <cstdint>
#include <fstream>
#include <string>
#include <sstream>
// #include "helperLibrary.h"

uint32_t convertHexToDecimal(uint32_t hex){ // maybe put a &
	// hex = std::stoul(hex, nullptr, 16);
	// unsigned long hex1;
	// hex1 = std::stoul(hex,nullptr,16);
	// uint32_t decimal = hex1;
	// return decimal;
	std::stringstream ss;
	ss << std::hex << hex;
	ss >> hex;
	return hex;
}

void printDecimalToHex(uint32_t decimal){
  	std::cout << std::setfill('0') << std::setw(8) << std::hex << decimal;
}

void addDecimal(uint32_t decimal1, uint32_t decimal2){
	uint32_t hex3;
	hex3 = decimal1 + decimal2;
	//if (hex3 > UINT32_MAX){ hex3 - UINT32_MAX; }
	printDecimalToHex(hex3);
}

int main(){

//ignore the 0x
//add the 2 hexes by using a dictionary formula
//each digit corresponds to a number
//make sure to remember that there's a carry and a sum
//the remainder will be the carry?
//the sum will be the not remainder?????

//read the text input line by line. this comes from a file
	std::string filename;
	std::cout << "What's the filename? ";
	std::cin >> filename;

	std::ifstream file(filename);
  
	std::cout << "1";
	file.open(filename);
	std::cout << "2";

	// if (file.is_open()){
    std::string func;
    uint32_t hex1, hex2;
	std::cout << "3";
    while (file >> func >> hex1 >> hex2){
		std::cout << "4";
      	uint32_t decimal1 = convertHexToDecimal(hex1);
      	uint32_t decimal2 = convertHexToDecimal(hex2);
      	addDecimal(decimal1, decimal2);
    // }
  }

  // create a function to take in 3 string values. add, hex, hex.
  // save the first word to a variable and match that first word to an operation
  // save the second word to variable top and truncate the first 2 digits
  // save the third word to variable bot and truncate the first 2 digits
  // add the top to the bot using hex math
      // this is done by converting each digit to a base 10 number and adding them together
  // save the remainder to variable remainder (need to figure this out)
  // add variable remainder to top and to bot. this might just be the regular process or something. needs more work.
  // convert to uint32_t and print out
  // print 2 captured numbers
  // print solution
  
  return 0;
}

// void addHex(std::string line){
//   std::string function;
//   std::string hex1;
//   std::string hex2;
//   //int i = 0;
//   for (int i = 0 ; i < line.length(); i++){ // does this stop at the space or after the space???
//     if (line[i] == ' '){ break; }
//     function += line[i];
//   }
//   for (int i = function.length(); i < line.length(); i++){
//     if (line[i] == ' '){ break; }
//     hex1 += line[i];
//   }
//   for (int i = function.length() + hex1.length(); i < line.length(); i++){
//     if (line[i] == ' '){ break; }
//     hex2 += line[i];
//   }
//   hex1.erase(0, 2);
//   hex2.erase(0, 2);

//   uint32_t decimal1 = convertHexToDecimal(hex1); // ensure hex1 saves properly
//   uint32_t decimal2 = convertHexToDecimal(hex2);
//   return addHexHelper(decimal1, decimal2);
// }
    
