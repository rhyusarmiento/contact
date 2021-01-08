#ifndef CONTACTS_H
#define CONTACTS_H
using namespace std;

class ContactNode
{
public:
	ContactNode(string contactName = "NoName", string contactPhoneNum = "000-000-0000");
	void InsertAfter(ContactNode *newNodePtr);
	string GetName();
	string GetPhoneNumber();
	string GetNext();
	void PrintContactNode();

private:
	string contactName;
	string contactPhoneNum;
	ContactNode *nextNodePtr;
};

#endif