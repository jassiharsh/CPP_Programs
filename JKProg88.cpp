#include<iostream>
using namespace std;
// Jaspreet Kaur
// To print sum of array second row
int main () {
	float sum = 0;
	float A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 1; j++) {
			cout<<A[i][1];
			sum = sum + A[i][1];
			if (j==0)
				cout<<endl;
		}
	cout<<"The sum of 2nd row (ist element) is " <<sum <<endl;
	system("pause");
	return 0;
}