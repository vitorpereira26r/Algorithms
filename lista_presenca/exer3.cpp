#include <iostream>
using namespace std;
int fatorial (int aux) {
  
}

int catalan (int n) {
  int catalan, soma, cont, ft1, ft2, ft3, aux1, aux2;
  while (n > cont){
    catalan = ft1 / (ft2 * ft3);
    aux1 = cont * 2;
    ft1 = fatorial (aux1);
    aux2 = cont + 1;
    ft2 = fatorial (aux2);
    ft3 = fatorial (cont);

  }
}

int main () {
  int n;
  cin >> n;
  catalan(n);
}