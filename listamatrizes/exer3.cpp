#include <iostream>
using namespace std;

void vencedor (string jogo[3][3], int i, int j){
	string p1, p2, p3;
	bool vencedor = false;
	
	// horizontal
	for (int x = 0; x < 3; x++){
		p1 = jogo[x][0];
		p2 = jogo[x][1];
		p3 = jogo[x][2];
		if (p1 == p2 and p1 == p3 and (p1 == "X" or p1 == "O")){
			cout << p1 << endl;
			cout << x << " " << 0 << endl;
			cout << x << " " << 1 << endl;
			cout << x << " " << 2 << endl;
			vencedor = true;
		}
	}
	
	// vertical
	for (int x = 0; x < 3; x++){
		p1 = jogo[0][x];
		p2 = jogo[1][x];
		p3 = jogo[2][x];
		if (p1 == p2 and p1 == p3 and (p1 == "X" or p1 == "O")){
			cout << p1 << endl;
			cout << 0 << " " << x << endl;
			cout << 1 << " " << x << endl;
			cout << 2 << " " << x << endl;
			vencedor = true;
		}
	}
	
	// diagonal 1
	for (int x = 0; x < 3; x++){
		p1 = jogo[0][0];
		p2 = jogo[1][1];
		p3 = jogo[2][2];
		if (p1 == p2 and p1 == p3 and (p1 == "X" or p1 == "O")){
			cout << p1 << endl;
			cout << 0 << " " << 0 << endl;
			cout << 1 << " " << 1 << endl;
			cout << 2 << " " << 2 << endl;
			vencedor = true;
		}
	}
	
	// diagonal 2
	for (int x = 0; x < 3; x++){
		p1 = jogo[2][0];
		p2 = jogo[1][1];
		p3 = jogo[0][2];
		if (p1 == p2 and p1 == p3 and (p1 == "X" or p1 == "O")){
			cout << p1 << endl;
			cout << 2 << " " << 0 << endl;
			cout << 1 << " " << 1 << endl;
			cout << 0 << " " << 2 << endl;
			vencedor = true;
		}
	}
	
	// sem vencedor 
	if (vencedor == false){
		cout << -1;
	}
}
	

int main (){
	string jogo [3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cin >> jogo[i][j];
		}
	}
	vencedor (jogo, 3, 3);
	return 0;
}
