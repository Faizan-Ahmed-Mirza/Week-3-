#include <iostream>
using namespace std;
main()
{
int rollno;
float aggregate;
char grade;
string name;

cout << "Enter your Name: " ;
cin >> name;
cout << "Enter your Roll Number: ";
cin >> rollno;
cout << "Enter your Aggregate: ";
cin >> aggregate;
cout << "Enter your Grade: ";
cin >> grade;
cout << "" << endl;

cout << "Your name is : " << name << endl; 
cout << "You roll number : " << rollno << endl;
cout << "You aggregate  : " << aggregate << endl;
cout << "You grade  : " << grade << endl;
}