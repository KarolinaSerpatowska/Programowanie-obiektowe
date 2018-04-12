#include <iostream>


using namespace std;

namespace pt
{
	class Point
	{
		int x, y;

	public:

		int getx()
		{
			return x;
		}

		int gety()
		{
			return y;
		}

		Point()
		{
			x = 0;
			y = 0;
			cout << x << endl << y << endl;
		}

		Point(int a, int b)
		{
			x = a;
			y = b;
			cout << x << endl << y << endl;
		}

	};
}




int main()
{
	pt::Point p(12, 10);

	system("PAUSE");
    return 0;
}
