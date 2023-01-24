#include <iostream>
#include <fstream>
using namespace std;
int main () {
	int x;
	string nomeArq;
	cin>> nomeArq;
	ofstream gravacao("cifrado");
	ifstream leitura(nomeArq);
	string texto;
	string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	bool trocou = false;
	
	while (leitura >> texto){
		x = texto.size();
		for (int i = 0; i < x; i++){
			for (int j = 0; j < 26; j++){
				if (texto[i] == letras[j]){
					if (j < 23 and trocou == false){
						texto[i] = letras[j+3];
						trocou = true;
					} else if (j >=23 and trocou == false) {
						texto[i] = letras [j-23];
						trocou = true;
					}
				}
			}
			trocou = false;
		}
		gravacao << texto << " ";
	}
	
	gravacao.close();
	leitura.close();







	//cout << x;
	/*for (int i = 0; i < 26; i++){
		cout << letras[i];
	}*/
	//leitura >> texto;
	//cout << texto;
	return 0;
}

// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
// D E F G H I J K L M N O P Q R S T U V W X Y Z A B C
