#include <iostream>
using namespace std;
//Jaspreet Kaur

int main () {
	float A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for (int i = 0; i < 1; i++)
		for (int j = 0; j < 3; j++) {
			cout<<A[0][j] <<" ";
			if (j==2)
				cout<<endl;
		}
	system("pause");
	return 0;
}