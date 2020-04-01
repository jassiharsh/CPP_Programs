#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 20
// Switch Case
int main () {
	int a;
	cout<<"Enter a Number - ";
	cin>>a;
	switch (a) {
	case 5: cout<<"five \n";
		break;
	case 2: cout<<"two \n";
		break;
	case 0: cout<<"zero \n";
		break;
	default : cout <<"negative";
		break;
	}
	system("pause");
	return 0;
}