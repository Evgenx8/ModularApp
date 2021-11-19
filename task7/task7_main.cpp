#include <iostream>

using namespace std;

extern double x;
extern double result;

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