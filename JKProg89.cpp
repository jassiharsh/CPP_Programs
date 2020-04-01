#include<iostream>
#include <string>
using namespace std;
// Jaspreet Kaur
// Program using struct

struct studentinfo {
 string name;
 int id;
 int age;
 double gpa;
};

void main () {
 studentinfo student;

 cout<<" Student Information ";
 cout<< " Name: ";
 cin>>student.name;
 cout<< " ID #: ";
 cin>>student.id;
 cout<<" Age: ";
 cin>>student.age;
 cout<< " GPA: ";
 cin>>student.gpa;
 
 cout<<endl;

 cout<<" Name: " <<student.name;
 cout<<" ID #: " <<student.id;
 cout<<" Age: "  <<student.age;
 cout<<" GPA: "  <<student.gpa;
 
}