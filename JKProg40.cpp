#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 40 Using the For Loop
// To Print the sum of odd numbers from 2 to 10 
int main () {
	int w, sum;
	for ( w = 2, sum = 0; w <= 10; w++) {
		if (w%2 != 0) 
			sum = sum + w;
	}
	cout<<"The Sum of odd numbers is " <<sum <<endl;
		system("pause");
		return 0;
}