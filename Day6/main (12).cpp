#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  std::string line;
  std::ifstream myfile("1.txt");
  std::vector<std::string> vec;

  while (getline(myfile, line)) {
    for (int i = 0; i < line.size() - 3; i++) {
      std::string marker = line.substr(i,4);
      vec.push_back(marker); //store all markers into a vector
      //std::cout << vec.at(i) << " ";

      //using day3 similar approach to check for repeaeted element in the marker
      std::string check1 = marker.substr(0,1); //1st letteer
      std::string check2 = marker.substr(1,1); //2nd letter
      std::string check3 = marker.substr(2,1); //3rd letter
      std::string check4 = marker.substr(3,1); //4th letter
      //std::cout << check1 << " " << check2 << " " << check3 << " " << check4 << "\n";
      if (check1 != check2 && check1 != check3 && check1 != check4 && check2 != check3 && check2 != check4 && check3 != check4) {
        std::string answer = marker;
        //std::cout << answer << " ";
        auto position = find(vec.begin(), vec.end(), answer);
        int where = position - vec.begin() + 1 + 3; //get the position of the last letter in marker
        std::cout << where << " "; 
      }
      
    }
  } 
}