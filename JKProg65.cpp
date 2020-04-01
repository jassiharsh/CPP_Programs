#include <iostream>
using namespace std;
// Jaspreet Kaur
// Prog 65
// Three Functions named SUM, Prod, Diff
// To print SUM, Prod, DIff
// Print in main() "This Program has 3 functions."
int sum (int, int);
int prod(int, int);
int diff(int, int);
int sum (int x, int y) {
	int z;
	z = x + y;
	return(z);
}
int prod (int x, int y) {
	int z;
	z = x * y;
	return(z);
}
int diff (int x, int y) {
	int z;
	z = x - y;
	return(z);
}

int main () {
	int a, b;
	cout<<"Please Enter Two Numbers.";
	cin>>a >>b;
	cout<<"The Sum of " <<a <<"and " <<b <<"is " <<sum(a,b) <<endl;
	cout<<"The prod of " <<a <<"and " <<b <<"is " <<prod(a,b) <<endl;
	cout<<"The diff of " <<a <<"and " <<b <<"is " <<diff(a,b) <<endl;
	cout<<"This Prog was done using Three Functions\n";
	system("pause");
	return 0;
}