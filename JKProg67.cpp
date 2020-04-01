#include <iostream>
using namespace std;

int geteuro() {
	double dollors, euro;
	cout<<"Would you Like to Convert Dollors to Euro?\n";
	cout<<"The rate is 1 dollor to .65 euros.\n";
	cout<<"How much woud you like to exchange? \n";
	cin>>dollors;
	euro = dollors * .6578;
	return euro;
}
int getpounds() {
	double dollors, pounds;
	cout<<"Would you Like to Convert Dollors to pounds?\n";
	cout<<"The rate is 1 dollor to .5561 euros.\n";
	cout<<"How much woud you like to exchange? \n";
	cin>>dollors;
	pounds = dollors * .5561;
	return pounds;
}

int main () {
	double dollors, euro, pounds;
	cout<<"CONVERT DOLLORS TO EUROS \n";
	euro = geteuro();
	cout<<"You total euros is " <<euro <<". \n";
	cout<<"\n";
	cout<<"CONVERT DOLLORS TO POUNDS \n";
	pounds = getpounds();
	cout<<"You total pounds is " <<pounds <<". \n";
	cout<<"\n";
	system("pause");
	return 0;
}