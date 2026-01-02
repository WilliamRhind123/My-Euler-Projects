#include <iostream>
using namespace std; 

int main() {

  int input = 1;
  cout << "What is the nunmber of the day of the week: \n";
  cin >> input;
  
  //int day = 4; C++ does not like varibles if you dont use them

  switch (input) {
    case 1:
      cout << "It is Monday";
      break;
    case 2:
      cout << "It is Tuesday";
      break;
    case 3:
      cout << "It is Wednesday";
      break;
    case 4:
      cout << "It is Thursday";
      break;
    case 5:
      cout << "It is Friday";
      break;
    case 6:
      cout << "It is Saturday";
      break;
    case 7:
      cout << "It is Sunday";
      break;
    //case (>7):
      //cout << "Invalid input";
  }
}