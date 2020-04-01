#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 21
// Enter a score and get a Grade
int main() { 
	int a;
	cout<<"What is the Score? \n";
	cin>>a;
	switch (a/10) {
	case 10: cout<<"You got A";
		break;
	case 9: cout<<"You got A";
		break;
	case 8: cout<<"You got B";
		break;
	case 7: cout<<"You got C";
		break;
	case 6: cout<<"You got D";
		break;
	default: cout<<"You got F \n";
		break;
	}
system("Pause");
return 0;	
}