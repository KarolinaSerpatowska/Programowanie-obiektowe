#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	Student *p=new Student("Zbychu",2);
	cout << p->ident() << endl;
	Teacher *t = new Teacher("Zbychu drugi", "Tytul");
	cout << t->ident() << endl;
	

	system("PAUSE");
	return 0;
}
