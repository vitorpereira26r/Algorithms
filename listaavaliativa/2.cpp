#include <iostream> 
using namespace std;

int main () {
	int hora[100];
	int min[100];
	bool t = true;
	int i = 0;
	
	while (t) {
		cin >> hora[i];
		if (hora[i] < 0){
			t = false;
		} else {
			cin >> min[i];
			i++;
		}
		//i++;
	}
	
	int margem = i*0.7;
	int hora70, min70;
	
	for (int t = 0; t <= margem; t++) {
		hora70 = hora[t];
		min70 = min[t];
	}
	cout << hora70 << ":" << min70 << endl;
	
	int horaC, minC;
	float entregaram = 0;
	
	cin >> horaC;
	cin >> minC;
	
	for (int t = 0; t < i; t++){
		if (hora[t] < horaC or (hora[t] <= horaC and min[t] <= minC)){
			entregaram++;
		}
	}
	
	//cout << hora70 << ":" << min70 << endl;
	cout << (entregaram*100)/(i) << endl;
	
	/*for (int x = 0; x < i - 1; x++){
		cout << hora[x] << " " << min[x] << endl;
	}*/
	return 0;
}
