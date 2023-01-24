#include <iostream>
using namespace std;

int maior () {
	int n, maior;
	char sent;
	
	cin >> n >> sent;
	
	maior = n;
	
	while (sent == 'S') {
		cin >> n >> sent;
		if (n > maior) {
			maior = n;
		}
	}
	return maior;
}


int main () {
	
	cout << maior () << endl;
		
	return 0;
}
