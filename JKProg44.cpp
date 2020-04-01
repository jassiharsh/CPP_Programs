#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 30
// To print the SUM of the list
int main () {
	int w, num, sum;
	cout<<" Please enter data from the list \n";
	for (w = 1, sum = 0; w <= 5; w++) {
		cin>>num;
		cout<<num <<" -> w is " <<w <<endl;
		sum = num + sum;
	}
	cout<<"The sum of list is " <<sum <<endl;
	system("pause");
	return 0;
}