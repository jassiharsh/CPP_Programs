#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 24
// To print even # from 10 to 17
int main() {
	int w;
	w = 10;
	while (w <= 17) {
		if (w%2==0)
			cout<<w <<" is even \n";
		w = w + 1;
	}
system("pause");
return 0;	
}