#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string napis;
	cin >> napis;
	string max = "z";
	string min = "a";
	transform(napis.begin(), napis.end(), napis.begin(), ::tolower);
	for (int i = 0; i < napis.size(); i++)
	{
			if (napis[i] >min[0])
			{
				min = napis[i];
			}
			else if(napis[i]<max[0])
			{
				max = napis[i];
			}
	}

	cout << min << endl << max<<endl;
	
	cin.get();
	cin.get();
    return 0;
}
