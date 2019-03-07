#include <iostream>
#include "MyString.h"
using namespace std;


MyString::MyString()
{
	stringPtr = nullptr;
}

MyString::MyString(const char * s)
{
	stringPtr = new char[strlen(s) + 1];
	strcpy_s(stringPtr, (strlen(s) + 1), s);
}

MyString::MyString(MyString & other)
{
	cout << endl << "COPY CONSTRUCTOR" << endl;

	delete[] stringPtr;
	stringPtr = new char[strlen(other.stringPtr) + 1];
	strcpy_s(stringPtr, (strlen(other.stringPtr) + 1), other.stringPtr);

}

MyString MyString::operator=(const MyString & other)
{
	if (this != &other)
	{
		delete[] stringPtr;

		stringPtr = new char[strlen(other.stringPtr) + 1];
		strcpy_s(stringPtr, strlen(other.stringPtr) + 1, other.stringPtr);
	}
		return this->stringPtr;
}

MyString MyString::operator+(const MyString & other)
{
	int size = strlen(stringPtr) + strlen(other.stringPtr) + 1;
	char * temp = new char[size];
	temp[0] = 0;

	strcpy_s(temp, size, stringPtr);
	strcat_s(temp, size, other.stringPtr);
 
	MyString newTemp(temp);
	delete[] temp;
	return newTemp.stringPtr;
}

bool MyString::operator==(const MyString & other)
{
	if (strcmp(stringPtr, other.stringPtr) == 0)
		return true;
	else
		return false;
}

const char * MyString::c_str()
{
	return stringPtr;
}

MyString::~MyString()
{
	cout << endl << "DESTRUCTOR " << endl;
	delete[]stringPtr; 
}

ostream& operator << (ostream & o, MyString& s)
{
	o << s.c_str();
	return o;
}