#include <iostream>
#include <string>

using namespace std;

class User
{
protected:
	string login;
	string password;
public:
	User(string l, string p)
	{
		login = l;
		password = p;
	}
	bool authorize(string n1, string n2)
	{
		if (n1 == login && n2 == password)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

};

class Student :public User
{
	string semestr;
public:
	Student(string s) : User("", ""), semestr(s)
	{	
	}

};

class Subject: public Student
{
	string przedmiot;
	int liczba_studentow;
	Student *tabw[100];
	int licznik = 0;
private:
	Subject(string p, int s) : Student ("") 
	{
		przedmiot = p;
		if (s <= 100)
		{
			liczba_studentow = s;
		}
	}
	bool Addstudent(Student *s)
	{
		if (licznik <= 100)
		{
			tabw[licznik] = s;
			licznik++;
			return true;
		}
		else
		{
			return false;
		}
	}

};
