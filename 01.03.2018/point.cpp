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
	void move(float x, float y)
	{
		this->x = this->x + x;
		this->y = this->y + y;
	}
};


int main()
{
	point p;
	p.setXY(5.5, 2.5);
	p.showXY();
	p.move(1.5, 2.5);
	p.showXY();
	cin.get();

    return 0;
}
