#include <iostream>
#include <fstream>
// a b c x y z rps r1 p2 s3 lost0 draw3 win6
int main() {
  std::ifstream myfile("data.txt");
  std::string line;
  int score = 0;
  
  while (getline(myfile, line)) {
    
    if (line == "A X") { //rock rock = 4
      score += 4;
    }
    else if (line == "A Y") { //rock paper = 8
      score += 8;
    }
    else if (line == "A Z") { //rock scissors = 3
      score += 3;
    }
    else if (line == "B X") { //paper rock = 1
      score += 1;
    }
    else if (line == "B Y") {//paper paper = 5
      score += 5;
    }
    else if (line == "B Z") { // paper scissors = 9
      score += 9;
    }
    else if (line == "C X") { //scissors rock = 7
      score += 7;
    }
    else if (line == "C Y") { //scissors paper = 2
      score += 2;
    }
    else if (line == "C Z") { //scissors scissors = 6
      score += 6;
    }
  }
  std::cout << score;
}