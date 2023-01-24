#include <iostream>
#include <fstream>
using namespace std;

void vencedor (int matriz[3][3]){
	int aux, winner = 0;
	
	for (int i = 0; i < 3; i++){
		aux = matriz[i][0];
		for (int j = 0; j < 3; j++){
			if (aux == matriz[i][j]){
				winner = matriz[i][j];
			} else { 
				winner = 0;
			}
			aux = matriz[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++){
		aux = matriz[0][i];
		for (int j = 0; j < 3; j++){
			if (aux == matriz[j][i]){
				winner = matriz[j][i];
			} else {
				winner = 0;
			}
			aux = matriz[j][i];
		}
	}
	
	for (int i = 0; i < 3; i++){
		aux = matriz[i][2];
		for (int j = 2; j >= 0; j++){
			if (aux == matriz[i][j]){
				winner = matriz[i][j];
			} else {
				winner = 0;
			}
			aux = matriz[i][j];
		}
	}
	
	aux = matriz[0][0];
	for (int i = 0; i < 3; i++){
		if (aux == matriz[i][i]){
			winner = matriz[i][i];
		} else {
			winner = 0;
		}
		aux = matriz[i][i];
	}
	
	cout << winner;	
}

int main(){
	ifstream leitura ("entrada.txt");
	int matriz[3][3];
	//cin >> matriz [0][0];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			leitura >> matriz[i][j];
		}
	}
	vencedor(matriz);
	return 0;
}
