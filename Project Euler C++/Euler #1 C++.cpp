#include <iostream>
using namespace std;

bool integer(float k)  
{
  if( k == (int) k) return true;
  return false;
}

int main() {
float i = 1;
  
  while (i < 20) {
    if (integer(i/3) == true) {
      cout << i << "\n";
    }
    if (integer(i/5) == true) {
      cout << i << "\n";
    }
    
    i++;
  }
  
}

