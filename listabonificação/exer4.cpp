#include <iostream>
using namespace std;
int main () {
	int n1, n2, n3, n4, n, inter1 = 0, inter2 = 0;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	cin >> n;
	
	while (n > 0) {
		if (((n >= 1 and n < n1) or (n >= n2 and n < n3)) and (n % 2 == 0)) {
			inter1++;
		} else if (((n >= n1 and n < n2) or (n >= n3 and n <= n4)) and (n % 2 == 1)) {
			inter2++;
		}
		cin >> n;
	}
	
	cout << inter1 << endl << inter2 << endl;
	
	return 0;
}
