#include "Teacher.h"
#include "Person.h"

Teacher::Teacher(string name,string title):Person(name)
{
	this->title = title;
}

string Teacher::ident()
{
	return name + " "+title;
}