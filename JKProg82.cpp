#include <iostream>
using namespace std;
// Jaspreet Kaur
// Array Second and Fourth element
int main () {
	float a[4];
	for (int i = 0; i < 4; i++) {
		cout<<"Enter Element \n";
		cin>>a[i];
		}
	cout<<"The Second Element in array if " <<a[1] <<"." <<endl;
	cout<<"The fourth Element in array if " <<a[3] <<"." <<endl;
	system("pause");
	return 0;
}