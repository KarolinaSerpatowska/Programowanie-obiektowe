#include <string>
#include <iostream>

using namespace std;

int main()
{//zawieranie napisu
	string s1;
	string s2;
	cin >> s1>>s2;
	string::iterator itn2 = s2.begin();
	cout << s1 << endl << s2 << endl;
	for (string::iterator itn1 = s1.begin(); itn1!=s1.end(); itn1++)
	{
		if (itn2 == s2.end());
		{
			cout << "s1 zawiera s2" << endl;
			return 0;

		}
		 if (*itn1 = *itn2)
		{
			itn2++;
		}
		else
		{
			itn2 = s2.begin();
		}
	}
	cout << "nie zawiera" << endl;

	cin.get();
    return 0;
}
