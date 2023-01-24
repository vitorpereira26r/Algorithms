#include <iostream>
using namespace std;
int main (){
int dia;

	cout << "Digite o dia da semana\n1: domingo" << endl 

	<< "2: segunda-feira\n3: terca-feira\n4: quarta-feira" << endl

	<< "5: quinta-feira\n6: sexta-feira\n7: sabado" << endl;

	cin >> dia;

	switch (dia){

		case 1:

			cout << "DOMINGO" << endl;

		case 2:

			cout << "SEGUNDA-FEIRA" << endl;

		case 3:

			cout << "TERCA-FEIRA" << endl;

		case 4:

			cout << "QUARTA-FEIRA" << endl;

		case 5:

			cout << "QUINTA-FEIRA" << endl;

		case 6:

			cout << "SEXTA-FEIRA" << endl;

		case 7:

			cout << "SABADO" << endl;

		default:

			cout << "VALOR INVALIDO" << endl;

	}

  return 0;

}