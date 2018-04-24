#include "RegularPrism.h"

RegularPrism::RegularPrism(double dl, double h, int i) :RegularPolyhedron(dl, h, i) {}

float RegularPrism::objetosc()
{
	return getpole()*getwysokosc();
}