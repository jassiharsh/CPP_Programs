#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 53
// To print how many numbers from 3922 to 4511 using while 
int main () {
	int w, c; // c is counter
	c = 0;
	w = 3922;
	do {
		w = w + 1;
			if (w <= 4511)
				c = 1 + c;
	}
	while (w <= 4511);
	cout<<"Their are " <<c <<" #'s from 3922 to 4511" <<endl; 
	system("pause");
	return 0;
}