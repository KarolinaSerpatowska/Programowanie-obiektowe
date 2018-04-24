#ifndef Teacher_h
#define Teacher_h

#include <string>
#include "Person.h"

using namespace std;

class Teacher:public Person
{
	string title;
public:
	Teacher(){}
	Teacher(string,string);
	virtual string ident();

};

#endif