#include <iostream>
#include <cmath>
using namespace std;

void romano (int n) {
	string invalido = "NUMERO INVALIDO";
	if (n > 50) {
		cout << invalido;
	}
	switch (n) {
		case 1:
			cout << "I";
			break;
		case 2:
			cout << "II";
			break;
		case 3:
			cout << "III";
			break;
		case 4:
			cout << "IV";
			break;
		case 5:
			cout << "V";
			break;
		case 6:
			cout << "VI";
			break;
		case 7:
			cout << "VII";
			break;
		case 8:
			cout << "VIII";
			break;
		case 9:
			cout << "IX";
			break;
		case 10:
			cout << "X";
			break;
		case 11:
			cout << "XI";
			break;
		case 12:
			cout << "XII";
			break;
		case 13:
			cout << "XII";
			break;
		case 14:
			cout << "XIII";
			break;
		case 15:
			cout << "XV";
			break;
		case 16:
			cout << "XVI";
			break;
		case 17:
			cout << "XVII";
			break;
		case 18:
			cout << "XVIII";
			break;
		case 19:
			cout << "XIX";
			break;
		case 20:
			cout << "XX";
			break;
		case 21:
			cout << "XXI";
			break;
		case 22:
			cout << "XXII";
			break;
		case 23:
			cout << "XXIII";
			break;
		case 24:
			cout << "XXIV";
			break;
		case 25:
			cout << "XXV";
			break;
		case 26:
			cout << "XXVI";
			break;
		case 27:
			cout << "XXVII";
			break;
		case 28:
			cout << "XXVIII";
			break;
		case 29:
			cout << "XXIX";
			break;
		case 30:
			cout << "XXX";
			break;
		case 31:
			cout << "XXXI";
			break;
		case 32:
			cout << "XXXII";
			break;
		case 33:
			cout << "XXXIII";
			break;
		case 34:
			cout << "XXXIV";
			break;
		case 35:
			cout << "XXXV";
			break;
		case 36:
			cout << "XXXVI";
			break;
		case 37:
			cout << "XXXVII";
			break;
		case 38:
			cout << "XXXVIII";
			break;
		case 39:
			cout << "XXXIX";
			break;
		case 40:
			cout << "XXXX";
			break;
		case 41:
			cout << "XXXXI";
			break;
		case 42:
			cout << "XXXXII";
			break;
		case 43:
			cout << "XXXXIII";
			break;
		case 44:
			cout << "XXXXIV";
			break;
		case 45:
			cout << "XXXXV";
			break;
		case 46:
			cout << "XXXXVI";
			break;
		case 47:
			cout << "XXXXVII";
			break;
		case 48:
			cout << "XXXXVIII";
			break;
		case 49:
			cout << "XXXXIX";
			break;
		case 50:
			cout << "L";
			break;
	}
	
}

int main () {
	int n;
	
	cin >> n;
	
	romano(n);
	
	return 0;
}
