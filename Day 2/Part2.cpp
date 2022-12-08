#include <iostream>
#include <fstream>
//xlose ydraw zwin

int main() {
  std::ifstream myfile("data.txt");
  std::string line;
  int score = 0;

  while (getline(myfile, line)) {
    if (line == "A X") { //scissors lose 3
      score += 3;
    }
    if (line == "A Y") { //rock draw 4
      score += 4;
    }
    if (line == "A Z") { //paper win 8
      score += 8;
    }
    if (line == "B X") { //rock lose 1
      score += 1;
    }
    if (line == "B Y") { //paper draw 5
      score += 5;
    }
    if (line == "B Z") { //scissors win 9
      score += 9;
    }
    if (line == "C X") { //paper lose 2
      score += 2;
    }
    if (line == "C Y") { //scissors draw 6
      score += 6;
    }
    if (line == "C Z") { //rock win 7
      score += 7;
    }
  }
  std::cout << score;
}
