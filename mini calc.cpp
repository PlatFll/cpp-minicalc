

#include "stdafx.h"
#include "iostream"

using namespace std;

int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;

}

int Sub(int x, int y) {
	int z = 0;
	z = x - y;
	return z;

}

int Mult(int x, int y) {
	int z = 0;
	z = x * y;
	return z;
}

float Div(double x, double y) {
	static_cast <float>  (x);
	static_cast <float>  (y);
	float z = 0.0;
	static_cast < float > ( z = x / y);
	return z;
}

int main()
{
	double x, y, a;
	
	cout << "What do you want to do?" << endl;
	cout << "1. Add\n2. Sub\n3. Mult\n4. Div(x/y)\n";
	cin >> a;
	if (a == 1) {
		cout << "Please enter 2 numbers :" << endl;
		cin >> x >> y;
		cout<< Add(x, y) <<endl;
	}

	else if (a == 2) {
		cout << "Please enter 2 numbers :" << endl;
		cin >> x >> y;
		cout<< Sub(x, y) <<endl;
	}

	else if (a == 3) {
		cout << "Please enter 2 numbers :" << endl;
		cin >> x >> y;
		cout << Mult(x,y) << endl;
	}
	else if (a == 4) {
		cout << "Please enter 2 numbers :" << endl;
		cin >> x >> y;
		cout << static_cast < float > (Div(x,y)) << endl;
	}

	else
	{
		cout << "Not a choice!\n" << endl;
		main();

	}
	
    return 0;
}

