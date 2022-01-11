#include <iostream>

using namespace std;

double f(const double x);
int main(int argc, char **argv) {
	const double x_c = 5;
	cout << "x = " << x_c << endl;
	cout << "y = " << f(x_c) << endl;
	double x;
	cout << "x = ";
	cin >> x;
	cout << "y = " << f(x) << endl;
}