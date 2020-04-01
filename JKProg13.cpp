#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 13
// To print the output
// Enter first number 5
// Enter second number 9
// The sum/diff/prod/quot
int main() {
	int a,b,sum,diff,prod,quot;
	cout<<"Enter the first # ";
	cin>>a;
	cout<<"Enter the seconf # ";
	cin>>b;
	sum = a + b;
	diff = a - b;
	prod = a * b;
	quot = a / b;
	cout<<"The sum is " <<sum <<endl;
	cout<<"The diff is " <<diff <<endl;
	cout<<"The prod is " <<prod <<endl;
	cout<<"The quot is " <<quot <<endl;

	system ("pause");

	return 0;
}