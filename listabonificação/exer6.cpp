#include <iostream>
using namespace std;
int main () {
	int n, q, aux, cont = 0;
	
	cin >> n >> q;
	
	if (q > n) {
		aux = n;
		n = q;
		q = aux;
	}
		
	while (n > q) {
		n = n - q;
		cont++;
	}
	
	cout << n << endl << cont << endl;
	
	return 0;
}
