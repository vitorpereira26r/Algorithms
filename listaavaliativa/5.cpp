#include <iostream>
using namespace std;

struct MegaCena {
	int n[6];
	int x;
};

int Soma (MegaCena vetor[], int x){
	int maiorsoma = 0;
	int vetorMaior = 0;
	int soma1;
	for (int i = 0; i < x; i++){
		for (int j = 0; j < 6; j++){
			soma1 += vetor[i].n[j];
		}
		if (soma1 > maiorsoma){
			maiorsoma = soma1;
			vetorMaior = i;
		}
		soma1 = 0;
	}
	return vetorMaior;
}

/*struct MegaCena {
	int n[6];
	int x;
};*/

int main () {
	int m;
	cin >> m;
	MegaCena* vetor = new MegaCena[m];
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < 6; j++){
			cin >> vetor[i].n[j];
		}
	}
	
	MegaCena maior;
	
	maior.x = Soma(vetor, m);
	
	for (int i = 0; i < 6; i++){
		cout << vetor[maior.x].n[i] << " ";
	}
	
	delete[] vetor;
	
	return 0;
}
//Declare um registro para armazenar um resultado de um sorteio da mega sena. DONE
//Faça um programa que receba do usuário uma quantidade de sorteios e as dezenas sorteadas, armazenando-as em um vetor alocado dinamicamente. DONE 
//Faça então um subprograma que receba esse vetor e retorne um ponteiro para o registro que tenha a maior soma de dezenas sorteadas. 
//Por fim, exiba os dados do registro retornado.
