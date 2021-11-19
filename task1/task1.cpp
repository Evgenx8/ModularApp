#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
	const double x_c = 5;
	cout << "x = " << x_c << endl;
	cout << "y = " << 1.0/(sqrt(2.0)+sqrt(x_c)) << endl;
	double x;
	cout << "x = ";
	cin >> x;
	cout << "y = " << 1.0/(sqrt(2)+sqrt(x)) << endl;
}