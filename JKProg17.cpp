#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 17 - Three Distinct Numbers
int main() {
	float a, b, c;
	cout<< "Enter a - ";
	cin>>a;
	cout<<"Enter b - ";
	cin>>b;
	cout<<"Enter c - ";
	cin>>c;
	if (a > b)
		if (a > c)
			cout<<"a is the greatest" <<endl;
		else if (c > a)
			cout<<"c is the greatest" <<endl;
		else
			cout<<"a, b are greatest" <<endl;
	else if (b > a)

		if (b > c)
			cout<<"b is greatest" <<endl;
		else if (c > b)
			cout<< "c is greatest" <<endl;
		else 
			cout<<"b, c are greatest" <<endl;
	else if (a > c)
		cout<<"a and b are greatest" <<endl;
	else 
		cout<<"c is greatest" <<endl;
	system ("pause");
	return 0;
}