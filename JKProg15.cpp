#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 15 - Linear Equation
int main() {
	float a, b, x;
	cout<< "Enter a - ";
	cin>>a;
	cout<<"Enter b - ";
	cin>>b;
	if (a == 0)
		if (b == 0)
			cout << "All Solutions" <<endl;
		else
			cout << "No Solutions" <<endl;
	else {
	x= -b/a;
	cout << "x = " <<x <<endl; 
	}
	system ("pause");
	return 0;
}