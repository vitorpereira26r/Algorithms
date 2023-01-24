#include <iostream>	
using namespace std;
int main (){
	int x = 5;
	int* pont;
	pont = &x;
	cout << "valor da variavel atravez do nome: " << x << endl;
	cout << "valor do endereco do ponteiro: " << pont << endl;
	cout << "valor da variavel atravez do ponteiro: " << *pont << endl;
	
	int y;
	y = x;
	// or
	y = *pont;
	
	x = 30;
	// or
	*pont = 30;
	
	y = 45;
	pont = &y;
	// agora o ponteiro aponta para y, nao x
	
	int* pont2;
	pont2 = NULL;
	cout << *pont2;
	
	int* pont3 = new int;
	return 0;
}
