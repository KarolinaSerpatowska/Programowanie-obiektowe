#ifndef Student_h
#define Student_h

#include "Person.h"

class Student:public Person
{
public:
	int semester;
	Student() {}
	Student(string, int);
	virtual string ident();
};

#endif