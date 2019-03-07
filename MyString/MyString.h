#pragma once
#include <iostream>
using namespace std;

class MyString
{
private:

	char* stringPtr;  //  <------------------------------------  Ptr to an arr of chars
					  //										 to hold string
public:
	MyString();	  //  <----------------------------------------- Default Constructor
	MyString(const char*); // <--------------------------------  Initialization Constructor
	MyString(MyString &);       // <---------------------------  Copy Constructor
	MyString operator = ( const MyString &);  //  <------------  Overloaded = constr.
	MyString operator + (const MyString &);   //  <------------  Overloaded + constr.
	bool operator == (const MyString &);  // <------------------ Overloaded == constr.
	const char * c_str();   // <-------------------------------- Getter Func. for <<
	~MyString(); // <------------------------------------------- Destructor
};

ostream& operator << (ostream & o, MyString& s); // overloaded << op. for simple cout of strings