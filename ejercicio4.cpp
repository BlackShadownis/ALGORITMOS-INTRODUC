#include <iostream>
using namespace std;

int main() {
  int edad;
  cout << "ingrese su edad: ";
  cin>> edad;

  if (edad < 18) {
    cout << "eres menor de edad";
    
  } else {
    cout << "eres mayor de edad";
  }

  return 0;
  
}
