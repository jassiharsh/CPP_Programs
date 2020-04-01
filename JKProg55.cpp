#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 55
// To print the SUM of the list
int main () {
	int w, num, sum;
	w = 1;
	sum = 0;
	cout<<" Please enter data from the list seperated by commas \n";
	do {
		cin>>num;
		cout<<num <<" and w is " <<w <<endl;
		w = w + 1; 
		sum = num + sum;
	} while (w <= 5);
	cout<<"The sum of list is " <<sum <<endl;
	system("pause");
	return 0;
}