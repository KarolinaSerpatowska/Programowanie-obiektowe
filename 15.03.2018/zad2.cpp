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
		semestr = s;
	}
};


int main()
{
	User u("aaa", "a");


	cin.get();
    return 0;
}
