#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 38
// To print even # from 10 to 17
int main () {
	int w;
	for (w = 10; w <= 17; w++)
		if (w%2 == 0)
			cout<<w <<" is even" <<endl;
	system("pause");
	return 0;
}