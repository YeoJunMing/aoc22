#include <iostream>
#include <fstream>

int main() {
//string the values in each file 3 times
  std::string elfc1; 
  std::string elfc2;
  std::string elfc3;
  int calories1 = 0;
  int calories2 = 0;
  int calories3 = 0;
  int maximum1 = 0; 
  int maximum2 = 0;
  int maximum3 = 0;
  
  std::ifstream myfile1 ("1.txt");
  while (getline (myfile1, elfc1)) {
    if (elfc1.empty()) {
          if (calories1 > maximum1) { 
      maximum1 = calories1;
    }
      calories1 = 0; 
      }
   else {
      calories1 = calories1 + std::stoi(elfc1);  
     }
   }
  myfile1.close();

  //repeat for second highest
  std::ifstream myfile2 ("1.txt");
  while (getline (myfile2, elfc2)) {
    if (elfc2.empty()) {
          if (calories2 > maximum2 && calories2 < maximum1) { 
      maximum2 = calories2; //to find the second highest 
    }
      calories2 = 0; 
      }
   else {
      calories2 = calories2 + std::stoi(elfc2);  
     }
    }
  myfile2.close();
    
    //repeat for third highest
  std::ifstream myfile3 ("1.txt");
  while (getline (myfile3, elfc3)) {  
    if (elfc3.empty()) {
          if (calories3 > maximum3 && calories3 < maximum2) { 
      maximum3 = calories3; //to find the third highest 
    }
      calories3 = 0; 
      }
   else {
      calories3 = calories3 + std::stoi(elfc3);  
     }    
    }
  myfile3.close();

  int top3 = maximum1 + maximum2 + maximum3;
  std::cout << top3;

}
