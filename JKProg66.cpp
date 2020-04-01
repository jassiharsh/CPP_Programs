#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 66
// A program with 1 functions
int add (int a, int b) {
	int c;
	c = a + b;
	return(c);
}
int main () {
	int d;
	d = add (4,5);
	cout<<"The sum of 4 and 5 is " <<d <<endl;
	system("pause");
	return 0;
}