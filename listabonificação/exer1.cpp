#include <iostream>
using namespace std;
int main () {
	int dia, hora, minuto, tempo, minutosaida, horasaida, diasaida;
	cin>>dia>>hora>>minuto>>tempo;
	
	diasaida = (tempo / 1440) + dia;
	tempo = (tempo % 1440);
	horasaida = (tempo / 60) + hora;
	minutosaida = (tempo % 60) + minuto;
	
	if (minutosaida >= 60) {
		minutosaida = minutosaida - 60;
		horasaida++;
	}
	
	cout << diasaida << " " << horasaida << " " << minutosaida << endl;
	
	return 0;
}
