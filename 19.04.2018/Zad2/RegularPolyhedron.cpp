#include "RegularPolyhedron.h"
#define _USE_MATH_DEFINES
#include <cmath>

poly::RegularPolyhedron::RegularPolyhedron(float dl,int i,float h)
{
	dl_boku = dl;
	ilosc_bokow = i;
	wysokosc = h;
	pole_podst = 0.25*ilosc_bokow*dl_boku*dl_boku*(1 / tan(M_PI / ilosc_bokow));
}

float poly::RegularPolyhedron::getpole()
{
	return pole_podst;
}
float poly::RegularPolyhedron::getwysokosc()
{
	return wysokosc;
}