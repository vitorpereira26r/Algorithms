#include <iostream>
using namespace std;
int main () {
	int matriz [4][4];
	int zeros = 0;
	int uns = 0;
	bool permutacao = true;
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cin >> matriz [i][j];
			if (matriz[i][j] == 0){
				zeros++;
			} else if (matriz[i][j] == 1){
				uns++;
			}
		}
		if (zeros == 3 and uns == 1 and permutacao){
			permutacao = true;
		} else if (zeros != 3 or uns != 1){
			permutacao = false;
		}
		//cout << zeros << " " << uns << endl;
		zeros = 0;
		uns = 0;
	}
	
	if (permutacao == true){
		cout << "sim";
	} else {
		cout << "nao";
	}
	
	return 0;
}
