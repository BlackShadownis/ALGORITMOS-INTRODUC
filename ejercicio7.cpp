#include <iostream>

using namespace std;
int main() {
  float libras;
  float kilogramos;
  float gramos;

  cout << "ingrese las libras a convertir: ";
  cin >> libras;
  cout << "\n";

  kilogramos = libras /  2.205;
  cout << "libras en kilogramos son: " << kilogramos << "\n";

  gramos = libras * 453.6;
  cout << "libras en gramos son: " << gramos;

  return 0;
  
  
}
