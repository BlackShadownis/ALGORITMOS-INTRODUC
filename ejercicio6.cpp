#include <iostream>
using namespace std;

int main()
{
  int numero;
  int contador = 0;
  cout << "escribe hasta que numero quieres contar: ";
  cin >> numero;

  while (contador < numero) {
    contador++;
    cout << contador << "\n";
  }

  return 0;
}
