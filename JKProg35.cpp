#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 35
// To print # between -10 and 11 from the list
int main () {
	int w, num; // num is for list
	w = 1;
	cout<<"Please enter data from list \n";
	while (w<=5) {
		cin>>num;
		if (num >= -10 && num <= 11) 
			cout<<num <<" is between -10 and 11." <<endl; 
		else
			cout<<num <<" is not between -10 and 11." <<endl;
		w = w + 1;
	}
	system("pause");
	return 0;
}