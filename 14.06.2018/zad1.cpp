#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void clear(int a, int b, vector<int>&z)
{
	replace_if(z.begin(), z.end(), [a,b](int z)->bool {return !(z >= a && z <= b); }, 0);
}

int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(1);
	v.push_back(3);
	v.push_back(7);
	for (int i = 0; i <(int) v.size(); i++)
	{
		cout << v[i] << endl;
	}
	
	clear(10, 12, v);

	for (int i = 0; i <(int) v.size(); i++)
	{
	cout << "po funkcji" << v[i] << endl;
	}

	system("PAUSE");
	return 0;
}
