#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 78

void allsol() {
	cout<<"All Solutions" <<endl;
}
void nosol() {
	cout<<"NO Solutions" <<endl;
}
float onesol(float b, float c) {
	float z;
	z = -c/b;
	return z;
}
float dulplicate(float a, float b, float c) {
	float d, b, a, c;
	d = b * b - 4 * a * c;
	return d;
}
float dulplsol(float a, float b ) {
	float z;
	cout<<"Duplicate Solution" <<endl;
	z = (-b/2) * a;
	return z; 
}
void sol1(float a, float b) {
			float x1, x2, d;
			cout<<"two solutions" <<endl;
			x1 = (-b + sqrt(d)) / 2 * a;
			x2 = (-b - sqrt(d)) / 2 * a;
			cout <<"x1 = " << x1 <<endl << "x2 = " <<x2 <<endl;
		} 

void main() {
	float a, b, c, d;
	cout<<"Enter 3 Numbers\n";
	cin>>a >>b >>c;
	if (a == 0)
		if (b == 0)
			if (c == 0)
				void allsol();
			else
				void nosol();
		else {
			float onesol();
		}

		else {
		d = b * b - 4 * a * c;
		if (d < 0)
			nosol();
		else if (d == 0) {
			float dulplsol(float a, float b );
			 }
		else {
		void sol1(float a, float b);	
		} 
	}
	system("pause");
}