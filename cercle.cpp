#include "cercle.h"

double Cercle::getRayon(void)
{
	return rayon;
}

void Cercle::setRayon(double _rayon)
{
	rayon = _rayon;
}

double Cercle::aire(void)
{
	return ((rayon * rayon)*3.1415926535);
}

void Cercle::afficher(ostream & s)
{
	s<<"Cercle (x="<<ancrage.x<<" ,y="<<ancrage.y<<" ,r="<<rayon<< " ,aire="<<aire()<<")"<<endl;
}

Cercle::Cercle()
{
	ancrage.x = 0;
	ancrage.y = 0;
	rayon = 1;
}

Cercle::Cercle(double _rayon)
{
	ancrage.x = 0;
	ancrage.y = 0;
	rayon = _rayon;
}

Cercle::Cercle(Coordonnee _ancrage)
{
	ancrage.x = _ancrage.x;
	ancrage.y = _ancrage.y;
	rayon = 1;
}

Cercle::Cercle(double _rayon, Coordonnee _ancrage)
{
	rayon = _rayon;
	ancrage.x = _ancrage.x;
	ancrage.y = _ancrage.y;
}

Cercle::Cercle(double _rayon, int _x, int _y)
{
	rayon = _rayon;
	ancrage.x = _x;
	ancrage.y = _y;
}

Cercle::~Cercle()
{}
	
	
	
	
	
	
	
	
	


	
	
	
	
	
	
