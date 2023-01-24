#include <iostream>
using namespace std;

struct Pessoa {
	string nome;
	int dia;
	int mes;
	int ano;
};

int main () {
	int n;
	int dia1, mes1, ano1;
	cin >> n;
	Pessoa dados[n];
	
	for (int i = 0; i < n; i++){
		cin >> dados[i].nome;
		cin >> dados[i].dia;
		cin >> dados[i].mes;
		cin >> dados[i].ano;
	}
	
	cin >> dia1;
	cin >> mes1;
	cin >> ano1;
	
	int idade;
	for (int i = 0; i < n; i++){
		cout << dados[i].nome << ": ";
		idade = ano1 - dados[i].ano;
		if (dados[i].mes > mes1){
			idade--;
		} else if (dados[i].dia > dia1 and dados[i].mes <= mes1){
			idade--;
		}
		if (dados[i].ano > ano1){
			idade = -1;
		}
		if (idade == 0 or idade == 1){
			cout << idade << " ano" << endl;
		} else if (idade >= 2){
			cout << idade << " anos" << endl;
		} else if (idade == -1){
			cout << idade << endl;
		}
	}
	
	return 0;
}
		
