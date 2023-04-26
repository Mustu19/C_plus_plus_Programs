#include <iostream>
using namespace std;

int main() {
// cout << "Welcome To CodeWithMustu" << endl;

// int a , b ;
// cout << "Enter 2 values of A and B : " << endl ;
// cin >> a >> b;
// cout << "The addition of both values is " << a+b << endl;

string firstName = "Harry ";
string lastName = "Bhai";
string fullName = firstName.append(lastName);
cout << fullName << endl;

string variable1 = "Hello World";
variable1[1] = 'i';
cout << variable1 << endl;

cout << "The length of the String is "<<variable1.length() << endl;
cout << "The merged string is " << firstName.append(variable1) << endl;
return 0;
}