#include "Student.h"

Student::Student(string name, int semester) :Person(name)
{
	this->semester = semester;
}

string Student::ident()
{
	return name + " " + to_string(semester);
}