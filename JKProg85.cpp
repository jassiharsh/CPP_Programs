#include <iostream>
using namespace std;
// Jaspreet Kaur
// Array
int main () {
	float a[4];
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		cout<<"Enter Element \n";
		cin>>a[i];
		if (i%2!=0)
			sum = sum + a[i];
	}
	cout<<"The Sum of the array is " <<sum <<"." <<endl;
	system("pause");
	return 0;
}