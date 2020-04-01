#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 7
void compute_area(double&area, double r1)
{ const double pi = 3.141592;
area = pi * r1 * r1;
}

void compute_circumference(double&circumference, double r1)
{ const double pi = 3.141592;
circumference = 2 * pi * r1;
}

int main () {
	double a, r, c;
	cout<<"enter a radius \n";
	cin>>r;
	compute_area(a, r);
	cout<<"\n Area = " <<a;
	compute_circumference(c, r);
	cout<< "\n Circumference = " <<c <<endl;
	system("pause");
	return 0;
} 
