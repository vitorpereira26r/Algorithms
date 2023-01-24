#include <iostream>
using namespace std;
int main () {
	char gabarito[8];
	char respostas[10][8];
	
	for (int i = 0; i < 8; i++){
		cin >> gabarito[i];
	}
	
	for (int a = 0; a < 10; a++){
		for (int b = 0; b < 8; b++){
			cin >> respostas[a][b];
		}
	}
	
	int aprovados = 0;
	int acertos;
	float nota;
	for (int x = 0; x < 10; x++){
		acertos = 0;
		for (int y = 0; y < 8; y++){
			if (respostas[x][y] == gabarito[y]){
				acertos++;
			}
		}
		nota = acertos * 12.5;
		cout << nota << endl;
		if (nota >= 60){
			aprovados++;
		}
	}
	cout << endl;
	
	int porcentagem = (aprovados*100)/10;
	
	cout << porcentagem;
	return 0;
}
