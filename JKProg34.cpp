#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 34
// To print the first and last # from the list
int main () {
	int w, num;
	w = 1; 
	cout<<"Print the Data list \n";
	while(w <= 5 ) {
		cin>>num;
		if (w == 1)
			cout<<num << " is the first number."<<" \n";
		w++;
	}
	cout<<num <<" is the last number. \n";
	system("pause");
	return 0;
}