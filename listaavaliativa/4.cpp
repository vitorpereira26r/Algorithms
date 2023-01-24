#include <iostream>
using namespace std;

struct Politico{
	string partido;
	string candidato;
};

struct Pf{
	string operacao;
	string nomecandidato;
	int valor;
};

int main () {
	int n;
	cin >> n;
	Politico dados[n];
	
	for (int i = 0; i < n; i++){
		cin >> dados[i].partido;
		cin >> dados[i].candidato;
	}
	
	int m;
	cin >> m;
	Pf operacaoPf[m];
	
	for (int i = 0; i < m; i++){
		cin >> operacaoPf[i].operacao;
		cin >> operacaoPf[i].nomecandidato;
		cin >> operacaoPf[i].valor;
	}
	
	string partido1;
	string operacao1;
	int soma = 0;
	
	cin >> partido1;
	cin >> operacao1;
	
	for (int i = 0; i < n; i++){
		if (dados[i].partido == partido1){
			for (int j = 0; j < m; j++){
				if (dados[i].candidato == operacaoPf[j].nomecandidato and operacao1 == operacaoPf[j].operacao){
					soma = soma + operacaoPf[j].valor;
				}
			}
		}
	}
	cout << soma << endl;
	
	return 0;
}
