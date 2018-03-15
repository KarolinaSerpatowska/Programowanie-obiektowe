#include <iostream>
#include <string>

using namespace std;

class User
{
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


int main()
{
	User u("aaa", "a");
	cout<<u.authorize("aaa", "b");
	
	cin.get();
    return 0;
}
