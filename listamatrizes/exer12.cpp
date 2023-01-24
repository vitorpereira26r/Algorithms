#include <iostream>
using namespace std;

struct Cartinha{
	string nome;
	string presente;
};

struct Brinquedo{
	string nomeBrinquedo;
	int estoque;
	int pedidos;
};

int main () {
	int n1; 
	cin >> n1;
	Cartinha cartinha[n1];
	
	for (int i = 0; i < n1; i++){
		cin >> cartinha[i].nome;
		cin >> cartinha[i].presente;
	}
	int n2;
	cin >> n2;
	Brinquedo brinquedo[n2];
	
	for (int i = 0; i < n2; i++){
		cin >> brinquedo[i].nomeBrinquedo;
		cin >> brinquedo[i].estoque;
		brinquedo[i].pedidos = 0;
		for (int x = 0; x < n1; x++){
			if (brinquedo[i].nomeBrinquedo == cartinha[x].presente){
				brinquedo[i].pedidos = brinquedo[i].pedidos + 1;
			}
		}
	}
	
	for (int y = 0; y < n2; y++){
		if (brinquedo[y].pedidos > brinquedo[y].estoque){
			cout << brinquedo[y].nomeBrinquedo << " ";
		}
	}
	return 0;
}
