#include <iostream>

using namespace std;

struct vec3
{
	float x;
	float y;
	float z;

	vec3(){}

	vec3(float a, float b, float c) 
	{
		x = a;
		y = b;
		z = c;
	}
	vec3 operator+(const vec3 &v)
	{
		vec3 v1;
		v1.x = v.x+x;
		v1.y = v.y+y;
		v1.z = v.z+z;

		return v1;
	}

	void operator+=(const vec3 &v)
	{
		
		x += v.x;
		y += v.y;
		z += v.z;

	}

	vec3 operator-(const vec3 &v)
	{
		vec3 v1;
		v1.x = x-v.x;
		v1.y = y-v.y;
		v1.z =z-v.z;

		return v1;
	}

	void operator-=(const vec3 &v)
	{
		
		x -= v.x;
		y -= v.y;
		z -= v.z;

	}

	vec3 operator*(const vec3 &v)
	{
		vec3 v1 = vec3((y*v.z) - (z*v.y), (z*v.x) - (x*v.z), (x*v.y) - (y*v.x));

		return v1;
	}

	void operator*=(const vec3 &v)
	{
		vec3 v1 = vec3((y*v.z) - (z*v.y), (z*v.x) - (x*v.z), (x*v.y) - (y*v.x));
		x = v1.x;
		y = v1.y;
		z = v1.z;
	}

	vec3 operator*(float a) 
	{
		vec3 v1 = vec3(a*x, a*y, a*z);
		return v1;
	}

	void operator *= (float a) 
	{
		x *= a;
		y *= a;
		z *= a;
	}
};


int main()
{
	vec3 v1(2,2,2);
	vec3 v2(2,2,2);

	vec3 sum = v1 + v2; 
	cout << sum.x << " " << sum.y << " " << sum.z << endl;
	sum += v2; 
	cout << sum.x << " " << sum.y << " " << sum.z << endl;
	sum= v1 - v2;
	cout << sum.x << " " << sum.y << " " << sum.z << endl;
	sum -= v2;
	cout << sum.x << " " << sum.y << " " << sum.z << endl;
	sum = v1*v2;
	cout << sum.x << " " << sum.y << " " << sum.z << endl;
	sum *= v2;
	cout << sum.x << " " << sum.y << " " << sum.z << endl;
	sum = v1 * 3;
	cout << sum.x << " " << sum.y << " " << sum.z << endl;
	sum *= 10;
	cout << sum.x << " " << sum.y << " " << sum.z << endl;

	system("PAUSE");
	return 0;
}
