#include <iostream>
#include <string>
#include "Contacts.h"
using namespace std;

ContactNode::ContactNode(string newcontactName, string newcontactPhoneNum)
{
	contactName = newcontactName;
	contactPhoneNum = newcontactPhoneNum;
}

void InsertAfter(ContactNode *otherNodePtr)
{
	(*otherNodePtr).GetNext();
}

string ContactNode::GetName()
{
	return contactName;
}

string ContactNode::GetPhoneNumber()
{
	return contactPhoneNum;
}

string ContactNode::GetNext()
{
	return contactName + ", " + contactPhoneNum;
}

void ContactNode::PrintContactNode()
{
	cout << "Name: " << contactName << endl;
	cout << "Phone number: " << contactPhoneNum << endl;
}
