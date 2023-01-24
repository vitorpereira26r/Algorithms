#include <iostream>
using namespace std;
int main () {
	float matriz[4][4];
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cin >> matriz[i][j];
		}
	}
	
	int n;
	cin >> n;
	int cidades[n];
	
	for (int x = 0; x < n; x++){
		cin >> cidades[x];
	}
	
	int c1, c2;
	float soma = 0;
	float valor;
	int z = 0;
	
	while (z < n - 1){
		c1 = cidades[z];
		z++;
		c2 = cidades[z];
		valor = matriz[c1][c2];
		soma = soma + valor;
	}
	
	cout << soma;
	return 0;
}
