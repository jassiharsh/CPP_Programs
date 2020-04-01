#include <iostream>
using namespace std;
// Jaspreet Kaur

int main () {
	int A[3][3] = {{2,1,4}, {3,7,5}, {9,8,6}};
	for (int i = 0; i < 4; i++) 
		for(int j = 0; j < 3; j++) {
			cout<<A[i][j] << " ";
			if (j==2)
				cout<<endl;
		}
	system("pause");
	return 0;
}