#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 51
// To Print the sum of odd numbers from 2 to 10
int main () {
	int w, sum;
	sum = 0;
	w = 2;
	do {
		if (w%2 != 0) 
			sum = sum + w;
		w = w + 1;
	} while (w <= 10);
	cout<<"The Sum of odd numbers is " <<sum <<endl;
		system("pause");
		return 0;
}