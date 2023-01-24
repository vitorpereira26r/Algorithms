#include <iostream>
using namespace std;

struct Stormtroopers {
	string nome;
	string planeta;
	int batalhas;
};

struct Planetas{
	string nome;
	int totalStorm;
	float media;
};

int main () {
	int planetas;
	int strtTotal;
	cin >> planetas;
	cin >> strtTotal;
	Stormtroopers stormtrooper[strtTotal];
	Planetas saida[strtTotal];
	
	for (int i = 0; i < strtTotal; i++){
		saida[i].nome = "-";
		saida[i].totalStorm = 0;
		saida[i].media = 0;
	}
	
	for (int i = 0; i<strtTotal; i++){
		cin >> stormtrooper[i].nome;
		cin >> stormtrooper[i].planeta;
		cin >> stormtrooper[i].batalhas;
	}
	
	int i = 0;
	int j = 0;	
	while (i < strtTotal){
		j = 0;
		while (saida[j].nome != stormtrooper[i].planeta and saida[j].nome != "-"){
			j++;
		}
		if (saida[j].nome == "-"){
			saida[j].nome = stormtrooper[i].planeta;
			saida[j].totalStorm++;
			saida[j].media += stormtrooper[i].batalhas;
		} else if (saida[j].nome == stormtrooper[i].planeta){
			saida[j].totalStorm++;
			saida[j].media += stormtrooper[i].batalhas;
		}
		i++;
	}
	i = 0;
	while (i < strtTotal and saida[i].nome != "-"){
		saida[i].media /= saida[i].totalStorm;
		cout << saida[i].nome << " " << saida[i].totalStorm << " " << saida[i].media << endl;
		i++;
	}
	
	return 0;
}
//programa que leia um vetor de registros com os dados dos Stormtroopers

//Cada registro deve ter os campos: nome, planeta de origem e número de batalhas que o Stormtrooper participou

//O programa deverá então calcular, para cada planeta, o número de Stormtroopers que vieram de lá e a quantidade média de batalhas 
//que eles participaram (guardando essas informações de cada planeta em um registro: nome do planeta, quantidade de Stormtroopers, 
//média de batalhas)

//o programa deverá exibir o vetor de registros com os dados dos planetas.
