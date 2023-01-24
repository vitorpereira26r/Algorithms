#include <iostream>
using namespace std;
int main (){
	int v[10];
	int x, y, z;
	int n, p, aux1;
	for (x = 0; x < 10; x++){
		v[x] = 0;
	}
	
	cin >> y;
	
	for (x = 0; x < y; x++){
		cin >> v[x];
	}
	
	cin >> n;
	cin >> p;
	
	aux1 = v[p];
	v[p] = n;
	
	for (z = p + 1; z < 10; z++){
		n = v[z];
		v[z] = aux1;
		aux1 = n;
	}
	
	for (x = 0; x < 10; x++){
		cout << v[x] << " ";
	}
	
	return 0;
}
