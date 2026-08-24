#include <iostream>
using namespace std;
int main()
{
int id1,id2,id3;
string title1,title2,title3;

//book 1
cout << "Enter Book 1 ID: ";
cin >> id1;

cin.ignore();
cout << "Enter Book 1 Title: ";
getline(cin, title1);

// book 2
cout << "Enter book 2 ID: ";
cin >> id2;

cin.ignore();
cout << "Enter Book 2 Title: ";
getline(cin, title2);

// book 3
cout  << "Enter Book 3 ID: ";
cin >> id3;

cin.ignore();
cout << "Enter Book 3 Title: ";
getline(cin, title3);

//Display Books

cout << "\n===== Library =====";

cout<<"\nbook ID: "<<id1;
cout<<"\nbook title: "<<title1;

cout<<"\nbook ID: "<<id2;
cout<<"\nbook title: "<<title2;

cout<<"\nbook ID: "<<id3;
cout<<"\nbook title: "<<title3; 
return 0; 
}
