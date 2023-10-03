#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x;
	double y;
	double R_1;
	double R_2;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R_1 = "; cin >> R_1;
	cout << "R_2 = "; cin >> R_2;
	if(pow(x, 2) + pow(y, 2) <= pow(R_2, 2) && x < 0 && y > 0 ||
		pow(x, 2) + pow(y, 2) >= pow(R_2, 2) &&
		pow(x, 2) + pow(y, 2) <= pow(R_1, 2) && x > 0 && y < 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}