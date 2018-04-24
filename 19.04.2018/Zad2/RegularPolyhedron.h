#ifndef RegularPolyhedron_h
#define RegularPolyhedron_h


namespace poly
{
class RegularPolyhedron
{
	float dl_boku;
	float pole_podst;
	float wysokosc;
	int ilosc_bokow;

protected:
	float getpole();
	float getwysokosc();

public:
	RegularPolyhedron(){}
	RegularPolyhedron(float, int, float);
	virtual float volume() = 0;

};
}


#endif