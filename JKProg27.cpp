#include <iostream>
using namespace std;
// Jaspreet Kaur
// Program 27
// To print all odd numbers and even numbers from 2 to 13
int main() {
	int w;
	w = 2;
	while (w <= 13) {
		if (w%2 == 0)
			cout<<w <<" is Even \n";
		else
			cout<<w <<" is Odd \n";
		w = w + 1;
	}
	system("pause");
	return 0;
}