#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 32
// To print the sum of odd # from the list
//
int main () {
	int w, num, sum;
	w = 1;
	sum = 0;
	cout<<"Please enter data from the list seperated by space \n";
	while (w <= 5) {
		cin>>num;
			if (num%2!=0)
				sum = num + sum; 
		w++;
	}
	cout<<"The sum of odd #'s from the list is " <<sum <<endl;
	system("pause"); 
	return 0;
}