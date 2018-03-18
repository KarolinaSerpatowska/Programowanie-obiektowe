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
	string getlogin()
	{
		return login;
	}
	string getpassword()
	{
		return password;
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

class Subject : public Student
{
	string przedmiot;
	int liczba_studentow;
	Student *tabw[100];
	int licznik = 0;
public:
	Subject(string p, int s) : Student("")
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

	Student fun(string i, bool &a)
	{
		for (int j = 0; j <= 100; j++)
		{
			if (tabw[j]->getlogin() == i)
			{
				a = true;
				return *tabw[j];
			}
			else
			{
				a = false;
				return 0;
			}
		}
	}
};


int main()
{
	User u("login", "password");
	Student s("1");
	Subject sub("subject", 1);




	cin.get();
	return 0;
}

