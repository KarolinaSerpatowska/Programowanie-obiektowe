#ifndef Person_h
#define Person_h

#include <string>

using namespace std;

class Person
{
protected:
	string name;

public:
	Person(){}
	Person(string);
	virtual string ident();

};

#endif