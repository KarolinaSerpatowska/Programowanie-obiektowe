#include "RegularPyramid.h"

RegularPyramid::RegularPyramid(double dl, double h, int i): RegularPolyhedron(dl, h, i) {}

float RegularPyramid::objetosc()
{
	return (getpole()*getwysokosc())/3;
}