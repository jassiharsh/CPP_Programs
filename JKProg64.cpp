#include <iostream>
using namespace std;
// Jaspreet Kaur
// Prog 64
// Two functions [ff1 - to print your name] & [ff2 - to print the sum of two numbers]
void ff1();
int ff2(int, int);
int main () {
	int a, b;
	cout<<"Welcome to functions\n";
	cout<<"Please Enter Two Numbers: ";
	cin>>a >>b;
	ff1();
	cout<<"The Sum is " <<ff2(a,b) <<endl;
	system("pause");
	return 0;
}
void ff1 () {
	cout<<"My name is Jaspreet Kaur\n";
}
int ff2 (int x, int y) {
	int z;
	z = x + y;
	return z;
}

