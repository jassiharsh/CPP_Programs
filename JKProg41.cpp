#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 41 Using 
// To print all odd numbers and even numbers from 2 to 13
int main() {
	int w;
	for (w = 2; w <= 13; w++) {
		if (w%2 == 0)
			cout<<w <<" is Even \n";
		else
			cout<<w <<" is Odd \n";
	}
	system("pause");
	return 0;
}