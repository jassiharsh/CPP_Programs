#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 72
void f(int&x, int y) {
	x = 88;
	y = 99;
}
int main() {
	int a, b;
	a = 22;
	b = 33;
	cout<<"a = " <<a <<" b = " <<b <<endl;
	f(a, b);
	cout<<"a = " <<a <<", b = " <<b <<endl;
	system("pause");
	return 0;
}