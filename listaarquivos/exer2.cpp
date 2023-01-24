#include <iostream>
#include <fstream>
using namespace std;
struct amigo{
     string nome;
     int idade;
     float altura;
     string telefone;
};

int main () {
	ofstream gravacao("saida.txt");
	ifstream leitura("agenda.txt");
	amigo texto;
		
	while (leitura >> texto.nome >> texto.idade >> texto.altura >> texto.telefone){
		gravacao << "--------" << endl;
		gravacao << texto.nome << " tem ";
		gravacao << texto.idade << " anos e ";
		gravacao << texto.altura << " de altura." << endl;
		gravacao << "Tel.: " << texto.telefone << "." <<  endl;
		gravacao << "--------" << endl;
	}

	gravacao.close();
	leitura.close();
	return 0;
}
