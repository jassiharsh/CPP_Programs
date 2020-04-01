#include <iostream>
#include <string>
using namespace std;
 
struct Book
{
   string  title;
   int   ISBN;
   string  author;
};
 
int main( )
{
   Book Book1;   

   cout<<"Enter Book Title: ";
   cin>>Book1.title;

   cout<<"Enter Author Name: ";
   cin>>Book1.author;

   cout<<"Enter ISBN: ";
   cin>>Book1.ISBN;

   // Book1 info
   cout << "\n";
   cout << "Book Info \n";
   cout << "Book Title : " << Book1.title <<endl;
   cout << "Book Author : " << Book1.author <<endl;
   cout << "Book ISBN : " << Book1.ISBN <<endl;

   system("pause");
   return 0;
}