#include <iostream>
#include <vector>

using namespace std;

template <template<typename ...> class C, typename T>
T &funkcja(C<T>& a)
{
	T &min = *a.begin();
	for (auto i = a.begin(); i != a.end(); i++)
	{
		if (*i < min)
		{
			min = *i;
		}
	}
	return min;
}

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(10);
	v.push_back(5);
	v.push_back(0);
	cout << funkcja<vector,int>(v)<<endl;

	system("PAUSE");
	return 0;
}
