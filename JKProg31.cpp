#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 31
// To print odd numbers from the list
int main () {
	int w, num;
	w = 1;
	cout<<"Please enter data from the list seperated by comma \n";
	while (w <= 5) {
		cin>>num;
			if (num%2!=0)
				cout<<num <<endl;
		w++;
	}
	system("pause");
	return 0;
}