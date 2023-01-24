#include <iostream>
using namespace std;

int primo() {
  int n, aux = 1, div = 2, cont = 1;
  cin >> n;
  if (n <= 0){
    return n;
  }
  
  bool primo = true;

  while (( div < n ) && primo) {
    if (n % div == 0) {
      primo = false;
    }
    div++;
  }
  if (primo)


int main() {
  cout << primo() << endl;
  return 0;
}