#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 31
// To print odd numbers from the list
int main () {
	int w, num;
	w = 1;
	cout<<"Please enter data from the list seperated by comma \n";
	for (w = 1; w <= 5; w++) {
		cin>>num;
			if (num%2!=0)
				cout<<num <<" is odd"<<endl;
	}
	system("pause");
	return 0;
}