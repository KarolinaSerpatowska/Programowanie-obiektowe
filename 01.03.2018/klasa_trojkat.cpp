#include <iostream>
using namespace std;

class trojkat
{
public:
	int a;
	int b;
	int c;
};


int main()
{
	trojkat x;
	int obw;
	cin >> x.a;
	cin >> x.b;
	cin >> x.c;
	obw = x.a + x.b + x.c;
	cout << obw;
	cin.get();
	cin.get();
    return 0;
}
