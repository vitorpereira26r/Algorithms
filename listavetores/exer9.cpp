#include <iostream>
using namespace std;
int main () {
	int vet[20];
	int par = 0;
	int impar = 0;
	int x;
	
	for (x = 0; x < 20; x++){
		cin >> vet[x];
		if (vet[x] % 2 == 0){
			par++;
		} else {
			impar++;
		}
	}
	int pares[par];
	int imp[impar];
	/*
	for (x = 0; x < 20; x++){
		cout << vet[x];
	}
	*/
	int p = 0,i = 0;
	for (x = 0; x < 20; x++){
		if (vet[x] % 2 == 0){
			pares[p] = vet[x];
			p++;
		} else {
			imp[i] = vet[x];
			i++;
		}
	}
	
	for (x = 0; x < par; x++){
		cout << pares[x]<< " ";
	}
	
	cout << endl;
	
	for (x = 0; x < impar; x++){
		cout << imp[x] << " ";
	}
	
	return 0;
}
// 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 3 2
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
