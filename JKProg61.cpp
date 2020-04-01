#include <iostream>
#include <cmath>
using namespace std;
// Jaspreet Kaur
// Program 61 - Unlimited Quadrartic Equation
int main() {
	int i;
	float a, b, c, d, x, x1, x2;
	char ans;  //END 
	for(i = 0; i!=-99; i++)
	{
		c
			out<< "Enter a - ";
		cin>>a;
		cout<<"Enter b - ";
		cin>>b;
		cout<<"Enter c - ";
		cin>>c;
		if (a == 0)
			if (b == 0)
				if (c == 0)
					cout<<"All Solutions" <<endl;
				else
					cout<<"NO Solutions" <<endl;
			else {
				x = -c/b;
				cout<<"x = " <<x <<endl;}
		else 
		{
			d = b * b - 4 * a * c;
			if (d < 0)
				cout<<"No Solution" <<endl;
			else if (d == 0) {
				cout<<"Duplicate Solution" <<endl;
				x = (-b/2) * a;
				cout<<x; }
			else {
				cout<<"two solutions" <<endl;
				x1 = (-b + sqrt(d)) / 2 * a;
				x2 = (-b - sqrt(d)) / 2 * a;
				cout <<"x1 = " << x1 <<endl << "x2 = " <<x2 <<endl;} 
		}
		cout<<"Do you want to solve another quadratic equation: (Y/N)";
		cin>>ans;
		if(ans=='N' | ans=='n' | ans == 'No' | ans == 'no')
		{
			i=-99;
		}
	}
	system("pause");
	return 0;
}

// Examples Tested
// 0x^2 + 0x + 0 = 0 Answer = "All Solutions"
// 0x^2 + 0x + 1 = 0 Answer = "No Solutions"
// 0x^2 + 2x + 1 = 0 Answer = -1/2
// 1x^2 + 2x + 1 = 0 Answer = "Duplicate Solution" = -1
// 1x^2 + 4x + 1 = 0 Answer = "two solutions" = d = 3.464 1st root = -0.267 | 2nd root = -3.73