#include <iostream>
using namespace std;
// Jaspreet Kaur
// To print how many numbers from 3922 to 4511
int main () {
	int w, c; // c is counter
	for (w = 3922, c = 0; w <= 4511; w++) {
			if (w < 4511)
				c = 1 + c;
	}
	cout<<"Their are " <<c <<" #'s from 3922 to 4511" <<endl; 
	system("pause");
	return 0;
	}