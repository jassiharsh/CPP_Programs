#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 25
// To print even # from 11 to 19
int main() {
	int w;
	w = 11;
	while (w <= 19) {
		if (w%2==0)
			cout<<w <<" is even \n";
		w = w+1;
	}
system("pause");
return 0;	
}