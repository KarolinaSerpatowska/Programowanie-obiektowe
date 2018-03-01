#include <iostream>
using namespace std;

class point
{
private:
	float x;
	float y;

public:
	
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}

	void setX(float x)
	{
		this->x = x;
	}
	
	void setY(float y)
	{
		this->y = y;
	}

	void move(float x, float y)
	{
		this->x = this->x + x;
		this->y = this->y + y;
		cout << this->x << endl << this->y << endl;
	}

};


int main()
{
	point p;
	p.setX(2.5);
	p.setY(3.5);
	cout<<p.getX()<<endl<< p.getY()<<endl;
	p.move(1, 2);

	cin.get();
	cin.get();

	return 0;
}
