#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int n, div = 2, div2;
	
	cin >> n;
	
	while (n != 1) {
		if (n % div == 0) {
			cout << div << " ";
			n = n / div;
			div2 = div;
		} else {
			div++;
		}
	}
	cout << endl;
	
	if (div2 == 2 or div2 == 3 or div2 == 5) {
		cout << "REGULAR" << endl;
	} else {
		cout << "NAO REGULAR" << endl;
	}
	
	return 0;
}
