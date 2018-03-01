#ifndef Point.h
#define Point.h

class Point
{
	private:
		float x;
		float y;

	public:
		Point(float x, float y);
		float getX();
		float getY();
		void setX(float x);
		void setY(float y);
		void move(Point p);
	};

#endif
