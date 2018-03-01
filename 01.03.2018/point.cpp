#include <iostream>
using namespace std;

class point
{
private:
	float x;
	float y;

public:
	void setX(float x)
	{
		this->x = x;
	}
	void showX()
	{
		cout << x;
	}
};


int main()
{
	point p;
	p.setX(5.5);
	p.showX();
	cin.get();

    return 0;
}
