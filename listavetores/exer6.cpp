#include <iostream>
#include <cstring>
using namespace std;

int main () {
	string p;
	//cin>>p;
	int tam, n, x = 0;
	int maior = 0;
	int aux, f;
	
	cin >> n;
	
	string plvs[n];
	
	while(x < n){
		cin >> p;
		tam = p.size();
		if (tam > maior){
			maior = tam;
		}
		plvs[x] = p;
		x++;
	}
	
	for (x = 0; x < n; x++){
		f = plvs[x].size();
		if (f < maior){
			aux = maior - f;
			for (aux > 0; aux--;){
				cout << "*";
			}
		}
		cout << plvs[x] << endl;
	}
	
	//cout << maior;
	//cout << plvs[2];
	//cout << tam;
	return 0;
}
