#include <iostream>
using namespace std;
/*
string sla (string nomes[], int n){
	string anterior;
	int nReal = 1, x;
	string nomeReal[nReal];
	anterior = nomes[0];
	for (x = 1; x < n; x++){
		if (nomes[x] == anterior){
			anterior = nomes[x];
		} else {
			nReal++;
			anterior = nomes[x];
		}
	}
	anterior = nomes[0];
	nomeReal[0] = nomes[0];
	int i = 1;
	for(x = 1; x < n; x++){
		if (nomes[x] == anterior){
			anterior = nomes[x];
		} else {
			nomeReal[i] = nomes[x];
			anterior = nomes[x];
			i++;
		}
	}
	return nomeReal[i];
}
*/
int main (){
	int n, x, nReal = 1;
	cin >> n;
	string nomes[n];
	string anterior;
	
	for (x = 0; x < n; x++){
		cin >> nomes[x];
	}
	
	//sla(nomes, n);
	
	anterior = nomes[0];
	for (x = 1; x < n; x++){
		if (nomes[x] == anterior){
			anterior = nomes[x];
		} else {
			nReal++;
			anterior = nomes[x];
		}
	}
	
	cout << nReal;

	cout << endl;
	string nomeReal[nReal];
	int i = 1;
	anterior = nomes[0];
	nomeReal[0] = nomes[0];
	for(x = 1; x < n; x++){
		if (nomes[x] == anterior){
			anterior = nomes[x];
		} else {
			nomeReal[i] = nomes[x];
			anterior = nomes[x];
			i++;
		}
	}
	
	for (x = 0; x < nReal; x++){
		cout << nomeReal[x] << endl;
	}

	return 0;
}
