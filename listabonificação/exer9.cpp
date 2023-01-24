#include <iostream>
#include <cmath>
using namespace std;

int potencia (int k, int n) {
	
	return pow (k, n);
}

int main () {
	int n, k;
	cin >> k >> n;
	
	cout << potencia (k, n) << endl;
	
	return 0;
}
