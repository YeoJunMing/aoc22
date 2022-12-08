#include <iostream>
#include <fstream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>

int main() {
  std::ifstream myfile("1.txt");
  int sum = 0; //for final answer
  
  std::string line;
  while (getline(myfile, line)) {
    size_t comma = line.find(','); //declare position of comma
    //std::cout << comma << "\n";
    std::string elf1 = line.substr(0, comma); //first elf in pair
    std::string elf2 = line.substr(comma + 1); //second elf in pair
    //std::cout << elf1 << " " << elf2 << "\n";
    size_t dash1 = elf1.find('-'); //declare position of dash in first elf
    size_t dash2 = elf2.find('-'); //declare position of dash in  second elf
    //std::cout << dash1 << "\n";
    int lower1 = stoi(elf1.substr(0, dash1)); //lower bound of first elf in pair
    int upper1 = stoi(elf1.substr(dash1 + 1)); //upper bound of first elf in pair
    //std::cout << lower1 << " " << upper1 << "\n";
    int lower2 = stoi(elf2.substr(0, dash2)); //lower bound of second elf in pair
    int upper2 = stoi(elf2.substr(dash2 + 1)); //upper bound of second elf in pair
    //std::cout << lower2 << " " << upper2 << "\n";
    
    //conditions for elf to overlap each other 
    if (lower1 >= lower2 && upper1 <= upper2) 
      sum += 1;
    else if (lower1<= lower2 && upper1 >= upper2)
      sum += 1;    
  }
  std::cout << sum;
}
