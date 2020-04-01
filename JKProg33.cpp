#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 33
// To print every other number from the list (skip one print one)
int main () {
	int w, num;
	w = 1;
	cout<<"Please enter data from the list seperated by space \n";
	while (w <= 5) {
		cin>>num;
		if (w%2 != 0)
		cout<<num <<" ";
	w++;
	}
	system("pause");
	return 0;
}