#include <iostream>
using namespace std;
int main()
{
  int soldados, cont, filas;
  cont = 0;
  filas = 0;

  cin >> soldados;

  while (soldados > 0) {
    filas++;
    cont++;
    soldados = soldados - cont;
  }

  cout << filas << endl;

  return 0;
}