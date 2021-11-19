#include <iostream>
#include <cmath>

using namespace std;

double x;
double result;

void f();

int main(int argc, char **argv) {
	x = 5;
	cout << "x = " << x << endl;
	f();
	cout << "y = " << result << endl;
	cout << "x = ";
	cin >> x;
	f();
	cout << "y = " << result << endl;
}
void f() {
	result = 1.0/(sqrt(2) + sqrt(x));
};