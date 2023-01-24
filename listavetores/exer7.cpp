#include <iostream>
#include <cstring>
using namespace std;

int main () {
	string palavra;
	int vogal = 0, cons = 0, x;
	
	cin >> palavra;
	
	for (x = 0; palavra[x]; x++){
		if (palavra[x] == 'a'){
			vogal++;
		} else if (palavra[x] == 'e'){
			vogal++;
		} else if (palavra[x] == 'i'){
			vogal++;
		} else if (palavra[x] == 'o'){
			vogal++;
		} else if (palavra[x] == 'u') {
			vogal++;
		} else {
			cons++;
		}
	}
	cout << vogal << endl << cons << endl;
	return 0;
}
