#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 18
// Enter a score and get a Grade
int main() { 
	int a;
	cout<<"What is your Score? - ";
	cin>>a >>endl;
	if (a >= 90)
		cout<<"You Got a A \n";
	else if (a >= 80 && a < 90)
		cout<<"You Got a B \n";
	else if (a >= 70 && a < 80)
		cout<<"You Got a C \n";
	else if (a >= 60 && a < 70)
		cout<<"You Got a D \n";
	else
		cout<<"You Got a F. \n"
		system("Pause");
return 0;	
}