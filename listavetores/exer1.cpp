#include <iostream>
using namespace std;

void leitura (int numeros[], int n) {
	int i;
	cout << "[";
	for(i = 0; i < n; i++){
		cout << numeros[i];
		if (i < n - 1) {
			cout << ", ";
		}
	}
	cout << "]";
}

int main () {
	int n, i;
	cin >> n;
	int numeros[n];
	
	for(i = 0; i < n; i++){
		cin >> numeros[i];
	}
	
	leitura (numeros, n);
	
	return 0;
}
