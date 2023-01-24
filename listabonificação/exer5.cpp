#include <iostream>
using namespace std;
int main () {
	int n, produto;
	int n1 = 1, n2 = 2, n3 = 3;
	bool triangular = true;
	cin>>n;
	
	while ((n1 < 10) or (n2 < 10) or (n3 < 10) or (produto == n)) {
		produto = n1 * n2 * n3;
		if (produto == n) {
			cout << "TRIANGULAR" << " " << n1 << " " << n2 << " " << n3 << endl;
			triangular = false;
		}
		n1 = n2;
		n2 = n3;
		n3++;
	}
	
	if (triangular) {
		cout << "NAO TRIANGULAR" << endl;
	}
	
	return 0;
}
