#include <iostream>
#include <cmath>
using namespace std;

struct pessoas {
	float salario;
	int idade;
	int filhos;
};

int main () {
	int n;
	float somasalario = 0;
	float somafilhos = 0;
	float maiorsalario = 0;
	float salario1000 = 0;
	cin >> n;
	pessoas pessoa[n];
	
	for (int i = 0; i < n; i++){
		cin >> pessoa[i].salario;
		cin >> pessoa[i].idade;
		cin >> pessoa[i].filhos;
		somasalario += pessoa[i].salario;
		somafilhos += pessoa[i].filhos;
		if (pessoa[i].salario > maiorsalario){
			maiorsalario = pessoa[i].salario;
		}
		if (pessoa[i].salario > 1000){
			salario1000++;
		}
	}
	
	float x = (salario1000 * 100 ) / n;
	
	cout << (somasalario / n) << endl;
	cout << (somafilhos / n) << endl;
	cout << maiorsalario << endl;
	cout << round(x) << "%" << endl;
	return 0;
}
