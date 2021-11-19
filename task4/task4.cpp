#include <iostream>
#include <cmath>

using namespace std;

void f(const double &x, double &y);
int main(int argc, char **argv) {
	const double x_c = 5;
	cout << "x = " << x_c << endl;
	double y;
	f(x_c, y);
	cout << "y = " << y << endl;
	double x;
	cout << "x = ";
	cin >> x;
	f(x, y);
	cout << "y = " << y << endl;
}
void f(const double &x, double &y) {
	y = 1.0/(sqrt(2) + sqrt(x));
};