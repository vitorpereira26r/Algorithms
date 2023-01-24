#include <iostream>
using namespace std;

struct carros {
	string nome;
	int ano;
	int preco;
};

int main () {
	int n;
	int referencia;
	
	cin >> n;
	
	carros carro[n];
	
	for (int i = 0; i < n; i++){
		cin >> carro[i].nome;
		cin >> carro[i].ano;
		cin >> carro[i].preco;
	}
	
	cin >> referencia;
	
	for (int j = 0; j < n; j++){
		if (carro[j].preco < referencia){
			cout << carro[j].nome << " ";
			cout << carro[j].ano << " ";
			cout << carro[j].preco << endl;
		}
	}
	return 0;
}
