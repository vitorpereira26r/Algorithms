#include <iostream>
#include <fstream>
using namespace std;
int main () {
	ifstream leitura("numeros");
	ofstream gravacao1("pares");
	ofstream gravacao2("impares");
	int n;
	while(leitura >> n){
		if (n % 2 == 0){
			gravacao1 << n << " ";
		}else {
			gravacao2 << n << " ";
		}
	}
	leitura.close();
	gravacao1.close();
	gravacao2.close();
	return 0;
}
