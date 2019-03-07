//---------------------------------------------------------------------------------------------
// Cana Hallenbeck
// Due Friday, March 1 ( Really sorry! Thanks so much for the help!
//					     will be more careful with time management)
//
// Prog II assignment 4
// Desc :
//		   {  Making a simplified version of the string class --
//		    can assign one string to another (s1 = s2); can initialize with another string 
//			( MyString s6(s1) ); can use overloaded == for true or false (if s3 == s2); 
//			can assign a string the value of two strings added together with overloaded + op.
//			(s3 = s2 + s1); simplified cout with overloaded << ( cout << s3; )  }
//---------------------------------------------------------------------------------------------

#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
	char arr[] = "sue";
	MyString s1 = "bob";
	MyString s2 = "sally";
	MyString s3(s1);
	MyString s4(arr);
	MyString s5;

	cout << "-----------------------"
		<< endl
		<< "s1 ( s1 = \"bob\"; ) : " 
		<< endl << s1 << endl
		<< "s2 ( s2 = \"sally\"; ) : " 
		<< endl << s2 << endl
		<< "s3 ( s3(s1); ) : " 
		<< endl << s3 << endl
		<< "s4 ( s4(arr); ) : " 
		<< endl << s4 << endl
		<< "s5 ( s5; ) : " 
		<< endl << "empty" << endl
		<< "-----------------------\n\n";

	cout << "s2 = s1 :" << endl;

	s2 = s1;

	cout << s2 << "\n\n";

	cout << "if s2 == s1:" << endl;


	if (s2 == s1)
	{
		cout << "s2 == s1!\n\n";
	}

	s3 = s1 + s2;

	cout << "if s3 == s1 + s2 :" << endl;

	if (s3 == (s1 + s2))
	{
		cout << "s3 == s1 + s2!\n\n";
	}

	s1 = "mabel";
	s2 = "kevin";

	cout << "s1 = mabel : " 
		<< endl 
		<< s1 
		<< endl
		<< "s2 = kevin : " 
		<< endl 
		<< s2 << "\n\n";

	cout << "s3 = s2 = s1 : " << endl;

	s3 = s2 = s1;

	cout << "s1 : " 
		<< s1 << endl
		<< "s2 : " 
		<< s2 << endl
		<< "s3 : " 
		<< s3 << endl;

	s3 = s3;

	MyString s6(s3);

	cout << endl << s6 << endl;


	return 0;
}
