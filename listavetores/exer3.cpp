#include <iostream>
using namespace std;
int main () {
	int i;
	int n = 9;
	char vet1[10];
	char vet2[10];
	char vetaux[10];
	
	for (i = 0; i < 10; i++){
		cin >> vet1 [i];
	}
	
	for (i = 0; i < 10; i++){
		cin >> vet2 [i];
	}
	
	for (i = 0; i < 10; i++){
		vetaux[i] = vet2[i];
	}
	
	for (i = 0; i < 10; i++){
		if (i % 2 == 0 or i == 0){
			vet2[n] = vet1[i];
			vet1[i] = vetaux[n];
			n--;
		}
	}
	
	for (i = 0; i < 10; i++){
		cout << vet1 [i] << " ";
	}
	
	cout << endl;
	
	for (i = 0; i < 10; i++){
		cout << vet2 [i] << " ";
	}
	
	return 0;
}
