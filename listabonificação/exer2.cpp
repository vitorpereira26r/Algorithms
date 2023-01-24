#include <iostream>
using namespace std;
int main () {
	float x1, x2, y1, y2, xy3, xyr;
	float k;
	char xy;
	
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> xy >> xy3;
	
	if (xy == 'x') {
		k = (xy3 - x1) / (x2 - xy3);
		xyr = ((k * y2) + y1) / (1 + k);
	} else if (xy == 'y') {
		k = (xy3 - y1) / (y2 - xy3);
		xyr = ((k * x2) + y1) / (1 + k);
	}
	
	if (k == (-1)) {
		cout << "nenhuma" << endl;
	} else {
		cout << xyr << endl;
	}
	
	return 0;
}
