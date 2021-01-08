#include <iostream>
#include <string>
#include "Contacts.h"
using namespace std;

int main()
{
	string person1Name;
	string person1Num;
	string person2Name;
	string person2Num;
	string person3Name;
	string person3Num;

	cout << "Person 1" << endl;
	cout << "Enter name: ";
	getline(cin, person1Name);
	cout << endl;
	cout << "Enter phone number: ";
	getline(cin, person1Num);
	cout << endl;
	ContactNode person1 = ContactNode(person1Name, person1Num);
	cout << "You entered: " << person1.GetNext() << endl;
	cout << endl;

	cout << "Person 2" << endl;
	cout << "Enter name: ";
	getline(cin, person2Name);
	cout << endl;
	cout << "Enter phone number: ";
	getline(cin, person2Num);
	cout << endl;
	ContactNode person2 = ContactNode(person2Name, person2Num);
	cout << "You entered: " << person2.GetNext() << endl;
	cout << endl;

	cout << "Person 3" << endl;
	cout << "Enter name: ";
	getline(cin, person3Name);
	cout << endl;
	cout << "Enter phone number: ";
	getline(cin, person3Num);
	cout << endl;
	ContactNode person3 = ContactNode(person3Name, person3Num);
	cout << "You entered: " << person3.GetNext() << endl;
	cout << endl;

	cout << "CONTACT LIST" << endl;
	cout << "Name: " << person1.GetName() << endl;
	cout << "Phone number: " << person1.GetPhoneNumber() << endl;
	cout << endl;
	cout << "Name: " << person2.GetName() << endl;
	cout << "Phone number: " << person2.GetPhoneNumber() << endl;
	cout << endl;
	cout << "Name: " << person3.GetName() << endl;
	cout << "Phone number: " << person3.GetPhoneNumber() << "/n" << endl;
}