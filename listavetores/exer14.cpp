#include <iostream>
using namespace std;

int geraVetor(int n, int var){
	int vn[n+5];
	for (int i = 0; i<n; i++){
		vn[i] = var[i];
	}
	return vn[n+5];
}

void preencheVetor (int var){
	int i = 0, cont = 1, n;
	
	//cin >> n;
	
	while (n > 0){
		cin >> n;
		var[i] = n;
		i++;
		if (i % 5 == 0 and i > 0){
			var = geraVetor(i, var);
			cont++;
			i = 0;
		}
	}
	//cout << var << endl;
	cout << cont << endl;
}

int main () {
	int *var = NULL;
	var = new int[5];
	
	preencheVetor(*var);
	
	return 0;
}
