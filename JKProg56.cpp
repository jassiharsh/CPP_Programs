#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 56
// To print odd numbers from the list
int main () {
	int w, num;
	w = 1;
	cout<<"Please enter data from the list seperated by comma \n";
	do {
		cin>>num;
			if (num%2!=0)
				cout<<num <<endl;
		w++;
	} while (w <= 5);
	system("pause");
	return 0;
}