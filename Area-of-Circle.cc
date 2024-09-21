#include <iostream>
#include <cmath>

using namespace std;

/*
write a program to calculate the area of a circle
*/


int main()
{	
	cout << "Enter radius: ";
	double radius;
	cin >> radius;
	
	const double pi = 3.14;
	double area = pi * pow( radius , 2);
	
	cout << area;
	return 0;
}
