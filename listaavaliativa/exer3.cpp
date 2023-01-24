#include <iostream> 
using namespace std;
int main (){
	int n;
	cin >> n;
	int matriz[n][n];
	
	int xCavalo, yCavalo;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> matriz[i][j];
			if (matriz[i][j] == 1){
				xCavalo = i;
				yCavalo = j;
			}
		}
	}
	
	int x,y;
	int peoes = 0;
	
	x = xCavalo + 2;
	if (matriz[x][yCavalo + 1] == 2){
		peoes++;
	} else if (matriz[x][yCavalo - 1] == 2){
		peoes++;
	}
	x = xCavalo - 2;
	if (matriz[x][yCavalo - 1] == 2){
		peoes++;
	} else if (matriz[x][yCavalo + 1] == 2){
		peoes++;
	}
	y = yCavalo + 2;
	if (matriz[xCavalo + 1][y] == 2){
		peoes++;
	} else if (matriz[xCavalo - 1][y] == 2){
		peoes++;
	}
	y = yCavalo - 2;
	if (matriz[xCavalo + 1][y] == 2){
		peoes++;
	} else if (matriz[xCavalo - 1][y] == 2){
		peoes++;
	}
	
	cout << peoes << endl;
	
	return 0;
}
