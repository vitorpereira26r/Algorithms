#include <iostream>
using namespace std;

struct pacientes {
	string nome;
	char sexo;
	float altura;
	float peso;
	//float peso_ideal;
};

float pesoIdeal (char sexo, float altura){
	float pesoideal;
	if (sexo == 'H'){
		pesoideal = (72.7 * altura) - 58;
	} else if (sexo == 'M'){
		pesoideal = (62.1 * altura) - 44.7;
	}
	return pesoideal;
}

int main () {
	int n;
	cin >> n;
	pacientes paciente[n];
	float peso_ideal;
	
	for (int i = 0; i < n; i++){
		cin >> paciente[i].nome;
		cin >> paciente[i].sexo;
		cin >> paciente[i].altura;
		cin >> paciente[i].peso;
		//paciente[i].peso_ideal = pesoIdeal(paciente[i].sexo, paciente[i].altura);
	}
	
	int maiorPeso = 0;
	for (int i = 0; i < n; i++){
		if (paciente[i].peso > maiorPeso){
			maiorPeso = i;
		}
	}
	cout << paciente[maiorPeso].nome << endl;
	
	for (int i = 0; i < n; i++){
		peso_ideal = pesoIdeal(paciente[i].sexo, paciente[i].altura);
		if (paciente[i].peso > peso_ideal){
			cout << paciente[i].nome << " " << peso_ideal - paciente[i].peso;
			cout << endl;
		}
	}
	
	for (int i = 0; i < n; i++){
		peso_ideal = pesoIdeal(paciente[i].sexo, paciente[i].altura);
		if (paciente[i].peso < peso_ideal){
			cout << paciente[i].nome << " " << peso_ideal - paciente[i].peso;
			cout << endl;
		}
	}
		
	return 0;
}
