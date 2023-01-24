#include <iostream> 
using namespace std;

int main () {
	string p;
	cin >> p;
	int x = p.size();
	//cout << x;
	
	char anterior = p[0];
	cout << p[0];
	for (int i = 1; i < x; i++){
		if(p[i] == anterior){
		} else {
			cout << p[i];
		}
		anterior = p[i];
	}
	return 0;
}
