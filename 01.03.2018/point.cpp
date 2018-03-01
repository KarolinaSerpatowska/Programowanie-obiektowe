#include <iostream>
using namespace std;

class point
{
private:
	float x;
	float y;

public:
	void setXY(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
	void showXY()
	{
		cout << x<<endl<<y<<endl;
	}
};


int main()
{
	point p;
	p.setXY(5.5, 2.5);
	p.showXY();
	cin.get();

    return 0;
}
