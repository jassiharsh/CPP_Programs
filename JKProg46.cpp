#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 32
// To print the sum of odd # from the list
//
int main () {
	int w, num, sum;
	cout<<"Please enter data from the list seperated by comma \n";
	for (w = 1, sum = 0; w <= 5; w++) {
		cin>>num;
			if (num%2!=0)
				sum = num + sum; 
	}
	cout<<"The sum of odd #'s from the list is " <<sum <<endl;
	system("pause"); 
	return 0;
}