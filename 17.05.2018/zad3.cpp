#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class Typ>
Typ &funkcja(vector<Typ> v)
{
	sort(v.begin(), v.end());
	Typ v1 = v.at(0);
	return v1;
}


int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(10);
	v.push_back(5);
	v.push_back(0);
	cout << funkcja<int>(v)<<endl;

	system("PAUSE");
    return 0;
}
