#include <iostream>
#include <list>
using namespace std; 

int main() {
  list<string> goodBreakfasts = {"eggs", "bacon", "toast", "sausage", "hashbrowns"};
  
  string breakfast = "";
  cout << "what do you want for breakfeast: ";
  cin >> breakfast;
  cout << "\n";
  cout << "I have cooked " << breakfast << " for breakfeast\n";
  
  if (breakfast == "eggs") {
    cout << "it was a good breafast\n";
  }
    else if (breakfast == "bacon") {
      cout << "it was a good breafast\n";
    }
    else if (breakfast == "toast") {
      cout << "it was a good breafast\n";
    }
    else if (breakfast == "suasage") {
      cout << "it was a good breafast\n";
    }
    else if (breakfast == "hashbrown") {
      cout << "it was a good breafast\n";
    }
    else {
      cout << "it was not a good breakfast\n";
    }
  
}