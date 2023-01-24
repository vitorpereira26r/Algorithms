#include <iostream>
#include <string.h>
using namespace std;
int main () {
	int x=0;
	int vogal = 0;
	string palavra;
	cin >> palavra;
	//cout << palavra[3];
	while(palavra[x]){
		switch(palavra[x]){
			case 'a':
			vogal++;
			break;
			case 'e':
			vogal++;
			break;
			case 'i':
			vogal++;
			break;
			case 'o':
			vogal++;
			break;
			case 'u':
			vogal++;
			break;
		}
		x++;
	}
	
	cout << vogal;
	return 0;
}
