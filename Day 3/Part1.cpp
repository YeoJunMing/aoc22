#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  std::string line;
  char common; //the repeated element
  int sum = 0; //for final answer
  std::string firsthalf, secondhalf; //declaring two halves of line
  std::ifstream myfile ("1.txt");

  std::vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' ,'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  
  while (getline(myfile, line)) {
    firsthalf = line.substr(0, line.size()/2);
    secondhalf = line.substr(line.size()/2);
    //std::cout << firsthalf << " " << secondhalf << "\n";
    
    for (int i = 0; i < firsthalf.size(); i++) {

      for (int j = 0; j < secondhalf.size(); j++) {
        if (firsthalf[i] == secondhalf[j]) {
          common = firsthalf[i];
          //std::cout << common << "\n";              
        }
      }
    }
    //find repeated element in vec
      auto position = find(vec.begin(), vec.end(), common);
      int priority = position - vec.begin()+ 1; //subtracting .begin() to give a value
      sum += priority;
  }
  std::cout << sum;
}
