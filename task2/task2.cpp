#include <iostream>
#include <cmath>

using namespace std;

double f(const double x) {
	return 1.0/(sqrt(2) + sqrt(x));
};
int main(int argc, char **argv) {
	const double x_c = 5;
	cout << "x = " << x_c << endl;
	cout << "y = " << f(x_c) << endl;
	double x;
	cout << "x = ";
	cin >> x;
	cout << "y = " << f(x) << endl;
}