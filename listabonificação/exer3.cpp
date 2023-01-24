#include <iostream>
using namespace std;
int main () {
	int n, cont = 1, soma = 0;
	
	cin >> n;
		
	while (n > 0) {
		while (cont < n) {
			if (n % cont == 0) {
				soma = soma + cont;
			}
			cont++;
		}
		if (soma == n) {
			cout << "perfeito" << endl;
		} else {
			cout << "nao perfeito" << endl;
		}
		cin >> n;
	}
	
	return 0;
}
