#include <iostream>
using namespace std;
int main () {
	int m [10] [10];
	
	int i, j;
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			cin >> m [i] [j];
		}
	}
	
	int maior = m [0] [0];
	int linha_maior = 0;
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if (m [i] [j] > maior){
				maior = m [i] [j];
				linha_maior = i;
			}
		}
	}
	
	int menor = m [linha_maior] [0];
	int j_menor = 0;
	
	for(j = 0; j < 10; j++){
		if (m [linha_maior] [j] < menor){
			menor = m [linha_maior] [j];
			j_menor = j;
		}
	}
	
	cout << menor << endl << linha_maior << " " << j_menor << endl;
	
	return 0;
}
