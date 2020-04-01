#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 29
// To print the list using loop 
// List: 5, -2, 11, 17, 9
int main () {
	int w, num; // num is for list
	w = 1;
	cout<<"Please enter data from list \n";
	while (w<=5){
			cin>>num;
			cout<<num <<" and w = " <<w <<endl;
			w = w + 1;
	}
	system("pause");
	return 0;
}