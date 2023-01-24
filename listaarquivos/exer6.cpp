#include <iostream>
#include <fstream>
using namespace std;
int main () {
	int n;
	string nomeArq;
	cin >> nomeArq;
	
	ofstream gravacao("saida.txt");
	ifstream leitura(nomeArq);
	
	while (leitura >> n){
		if (n % 3 != 0){
			gravacao << n << " ";
		}
	}
	gravacao.close();
	leitura.close();
	return 0;
}
