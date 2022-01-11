#include <iostream>
#include "task9.hpp"

using namespace std;

int main(int argc, char **argv) {
	task9::x = 5;
	cout << "x = " << task9::x << endl;
	task9::f();
	cout << "y = " << task9::result << endl;
	cout << "x = ";
	cin >> task9::x;
	task9::f();
	cout << "y = " << task9::result << endl;
};