#include <iostream>
#include <iomanip>
#include <cstdint>
#include <fstream>
#include <string>

int main{

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

  std::ifstream file;
  file.open(filename);
  if (file){
    std::string word;
    while (getline(file, std::string line)){
      addHex(line);
    }
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
};

void addHex(std::string line){
  std::string function;
  std::string hex1;
  std::string hex2;
  //int i = 0;
  for (int i = 0 ; i < line.length(); i++){ // does this stop at the space or after the space???
    if (line[i] == ' '){ break; }
    function += line[i];
  }
  for (int i = function.length(); i < line.length(); i++){
    if (line[i] == ' '){ break; }
    hex1 += line[i];
  }
  for (int i = function.length() + hex1.length(); i < line.length(); i++){
    if (line[i] == ' '){ break; }
    hex2 += line[i];
  }
  hex1.erase(0, 2);
  hex2.erase(0, 2);

  convertHexToDecimal(hex1&); // ensure hex1 saves properly
  convertHexToDecimal(hex2&);
  return addHexHelper(hex1, hex2);
}

void addHexHelper(uint32_t hex1, uint32_t hex2){
  uint32_t hex3;
  hex3 = hex1 + hex2;
  //if (hex3 > UINT32_MAX){ hex3 - UINT32_MAX; }
  printDecimalToHex(hex3);
}

void printDecimalToHex(uint32_t decimal){
  std::cout << std::setfill('0') << std::setw(8) << std::hex << decimal;
}
    
void convertHexToDecimal(std::string hex){
  //convert to uint32_t
}