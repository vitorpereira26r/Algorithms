#include <iostream>
using namespace std;
int main () {
	int n, i, j, soma = 0;
	
	cin >> n;
	
	int matriz [n] [n];
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> matriz [i] [j];
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if (i + j >= n){
				soma = soma + matriz [i] [j];
				cout << matriz [i] [j] << " ";
			}
		}
	}
	
	cout << endl;
	
	cout << soma << endl;
	
	return 0;
}
