#include <iostream>
using namespace std; //means that you don't have to write std::cout 

void familyFunction() {
  double myAge = 15;
  double mumAge = 39;
  double dadAge = 38; 
  double familyAge = myAge + mumAge + dadAge;
  //double is equivlant of a pyhton float

  //cout << "Hello World!\n";
  
  cout << "my age is: " << myAge;
  cout << "\n";
  cout << ("my mums age is: ");
  cout << (mumAge);
  cout << "\n";
  cout << ("my dads age is: ");
  cout << (dadAge);
  cout << "\n";
  cout << ("my families age is: ");
  cout << (familyAge);
  cout << "\n";
}

int main() {
  familyFunction();
  
}