#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 77
void allsol();
void nosol();
float onesol(float,float);
void main() {
	float a, b;
	cout<<"Enter 2 #'s" <<endl;
	cin>>a >>b;
	if (a==0)
		if (b==0)
			allsol();
		else
			nosol();
	else {
		cout<<"One solutions \n";
		cout<<"the solution is \n" <<onesol(a,b) <<endl;
	}
	system("pause");
}
void allsol() {
	cout<<"All solutions \n"; }
void nosol() {
	cout<<"No Solutions \n"; }
float onesol(float a, float b) {
	float z;
	z = -b/a;
	return z;
}