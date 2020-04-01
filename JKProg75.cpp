#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 73
void compute_circle(double&area, double&circumference, double r1)
{ const double pi = 3.141592;
area = pi * r1 * r1;
circumference = 2 * pi * r1;
}
int main () {
	double a, r, c;
	cout<<"enter a radius \n";
	cin>>r;
	compute_circle(a, c, r);
	cout<<"\n Area = " <<a << "\n Circumference = " <<c <<endl;
	system("pause");
	return 0;
} 
