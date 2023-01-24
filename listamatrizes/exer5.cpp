#include <iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	int matriz [n][n];
	
	for (int x = 0; x < 2; x++){
		for (int y = 0; y < n; y++){
			if (y <= x){
				matriz[x][y] = 1;
			} else {
				matriz[x][y] = 0;
			}
		}
	}
	
	for (int i = 2; i < n; i++){
		for (int j = 0; j < n; j++){
			if (j <= i) {
				matriz[i][j] = matriz[i-1][j] + matriz[i-1][j-1];
			} else {
				matriz[i][j] = 0;
			}
		}
	}
	
	for (int t = 0; t < n; t++){
		for (int h = 0; h < n; h++){
			if (matriz[t][h] > 0){
				cout << matriz[t][h] << " ";
			}
		}
		cout << endl;
	}
				
	return 0;
}
