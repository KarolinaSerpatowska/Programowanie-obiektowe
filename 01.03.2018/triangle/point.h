#ifndef POINT_H
#define POINT_H
class Point
{
	private:
		float x;
		float y;
	public:
		Point() {};
		Point(float x, float y);
		float getX();
		float getY();
		void setX(float x);
		void setY(float y);
		void move(Point p);
	};
  #endif
