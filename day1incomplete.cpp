#include <iostream>
#include <fstream>
#include <vector>


int main() {
  //stringing elf calories
  std::string elfc;
  
  //reading from file
  std::ifstream myfile ("data.txt");

  //make vector to have the total calories of each elf
  std::vector<int>calories;
  
  //reading each line
  while (getline (myfile, elfc)) {
    
    //when it reads until an empty line
    if (elfc.empty()) {
      //stoi(elfc) then add them up and the sum becomes an integer   
      //this happens until the strings are read then output the largest integer in the vector
    }
  std::cout << //max.element() idk how to code it
    }

}