#include <iostream>
using namespace std;

int anula (int numeros[], int n){
	int i;
	for (i = 0; i < n; i++){
		if (numeros[i] % 3 == 0){
			numeros[i] = -1;
		}
	}
	return numeros[n];
}

int main(){
	int n, i,cont = 0;
	cin >> n;
	int numeros [n];
	
	for (i = 0; i < n; i++){
		cin >> numeros[i];
	}
	
	anula (numeros, n);
	
	for (i = 0; i < n; i++) {
		if (numeros[i] >= 0) {
			cout << numeros[i];
			cout << " ";
			cont++;
		}
	}
	cout << endl << cont;
	
	return 0;
}
