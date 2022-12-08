#include <iostream>
#include <fstream>

int main() {

  std::string elfc; //string each value in the file
 
  int calories = 0;
  int maximum = 0; //will be the highest calories
  
  //reading from file
  std::ifstream myfile ("1.txt");

  while (getline (myfile, elfc)) {
    if (elfc.empty()) {
          if (calories > maximum) { //record the highest calories
      maximum = calories;
    }
      calories = 0; //ignore the calories of elf who are low
      }
   else {
      calories = calories + std::stoi(elfc); //adds up the calories of one elf
    }
  
    }
  std::cout << maximum;
}
