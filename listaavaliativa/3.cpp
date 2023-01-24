#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	int matriz[n][n];
	int linha = -1, coluna = -1;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> matriz[i][j];
			if (matriz[i][j] == 1 and linha == -1 and coluna == -1) {
				linha = i;
				coluna = j;
			}
		}
	}
	
	bool esquerda = (coluna - 1) >=0;
	bool direita  = (coluna + 1) < n;

	bool cima     = (linha - 2) >= 0;
	bool baixo    = (linha + 2) < n;

	int peoes = 0;
	
	if (cima) {
		if (esquerda) {
			if (matriz[linha+2][coluna-1] == 2){
				peoes++;
			}
		}

		if (direita){
			if (matriz[linha+2][coluna+1] == 2){
				peoes++;
			}
		}
	}

	if (baixo){
		if (esquerda){
			if (matriz[linha-2][coluna-1] == 2){
				peoes++;
			}
		}
		if (direita){
			if (matriz[linha-2][coluna+1] == 2){
				peoes++;
			}
		}
	}

	esquerda = (coluna - 2) >=0;
	direita  = (coluna + 2) < n;

	cima = (linha - 1) >=0;
	baixo = (linha + 1) < n;

	if (esquerda){
		if (cima){
			if (matriz[linha - 1][coluna - 2] == 2){
				peoes++;
			}
		}
		if (baixo){
			if (matriz[linha + 1][coluna - 2] == 2){
				peoes++;
			}
		}
	}

	if (direita){
		if (cima){
			if (matriz[linha - 1][coluna + 2] == 2){
				peoes++;
			}
		}
		if (baixo){
			if (matriz[linha + 1][coluna + 2] == 2){
				peoes++;
			}
		}
	}

	cout << peoes << endl;
	return 0;
}
