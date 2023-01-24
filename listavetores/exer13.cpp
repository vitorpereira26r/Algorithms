#include <iostream>
using namespace std;

void horasMinutos (int mnts){
	int* h = new int;
	int* m = new int;
	
	*h = mnts / 60;
	*m = mnts % 60;
	
	cout << *h << endl << *m << endl;
}

int main (){
	int mnts;
	cin >> mnts;
	horasMinutos(mnts);
	return 0;
}
