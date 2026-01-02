#include <iostream>
using namespace std; //means that you don't have to write std::cout 


int main() {

  string input = "";
  cout << "Type your Favourite Word!\n";
  cin >> input;
  cout << "your word was: " << input << "\n";

  if (input == "world") {
    cout << "you chose the best word!";
  }
  else {
    cout << "you did NOT! choose the best word!";
  }
  
}