#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	int vetor[n];
	for (int i = 0; i < n; i++){
		cin >> vetor[i];
	}
	
	int menor = vetor[0];
	int posicaoMenor = 0;
	for (int x = 0; x < n; x++){
		if (vetor[x] < menor){
			menor = vetor[x];
			posicaoMenor = x;
		}
	}
	cout << menor << " " << posicaoMenor;
	return 0;
}
