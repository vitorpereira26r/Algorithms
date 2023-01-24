#include <iostream>
using namespace std;
int main()
{
  int n, alg4, alg3;

  cin >> n;

  n = n / 10;
  n = n / 10;
  alg4 = n % 10;
  n = n / 10;
  alg3 = n % 10;

  if (((alg4 + alg3 == 7) || (alg4 + alg3 == 8)) && ((alg4 * alg3 == 12)))
  {
    cout << "Inimigo" << endl;
  }
  else
  {
    cout << "Amigo" << endl;
  }

  return 0;
}