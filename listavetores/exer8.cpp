#include <iostream>
using namespace std;

int main (){
	int n, x,soma = 0;
	cin >> n;
	int div[n];
	div[0] = 0;
	
	for (x = 1; x < n; x++){
		if (n % x == 0){
			div[x] = x;
			soma = soma + x;
		} else {
			div[x] = 0;
		}
	}
	
	if(soma == n){
		for (x = 0; x < n; x++){
			if (div[x] > 0){
				cout << div[x] << " ";
			}
			//cout << div[x];
		}
	} else {
		cout << -1;
	}
	
	return 0;
}
// pegar o numero
// pegar os numeros que sao seus dividendos
// ver se a soma dos dividendos é igual ao numero
// se sim, imprime os dividendos
// se n, imprime -1
