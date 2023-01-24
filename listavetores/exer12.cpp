#include <iostream>
#include <cstring>
using namespace std;

int Fatorial (int n){
	if (n ==0 or n ==1){
		return 1;
	} else {
		return n*Fatorial(n-1);
	}
}
int main (){
	string palavra;
	cin >> palavra;
	int tam = palavra.size();
	int letras = 0;
	int denominador = 1;
	int fatorial;
	char *p1 = new char [tam];
	for (int i = 0; i < tam; i++){
		p1[i] = palavra[i];
	}
	
	for (int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++){
			if (p1[j] == palavra[i]){
				p1[j] = '*';
				letras++;
			}
		}
		if (letras > 1){
			fatorial = Fatorial(letras);
			denominador = fatorial * denominador;
		} 
		letras = 0;
	}
	
	cout << (Fatorial(tam))/denominador << endl;
	return 0;
}
