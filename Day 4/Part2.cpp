#include <iostream>
#include <fstream>
#include <string>
#include <string>
#include <sstream>

int main() {
  std::string line;
  int sum = 0;
  
  std::ifstream myfile("1.txt");
  while (getline(myfile, line)) {
    size_t comma = line.find(',');
  
    std::string elf1 = line.substr(0, comma);
    std::string elf2 = line.substr(comma + 1);

    size_t dash1 = elf1.find('-');
    size_t dash2 = elf2.find('-');

    int lower1 = stoi(elf1.substr(0, dash1));
    int upper1 = stoi(elf1.substr(dash1 + 1));
    int lower2 = stoi(elf2.substr(0, dash2));
    int upper2 = stoi(elf2.substr(dash2 + 1));

    //  o----      ----o   visualization
    // ----o        o----
    // lower1 < upper2    upper1 > lower2  

    if (lower1 <= upper2 && upper1 >= lower2)
      sum += 1;
  }    
  std::cout << sum;
}
