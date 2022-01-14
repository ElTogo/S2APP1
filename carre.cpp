#include "carre.h"

	double Carre::getCote()
	{
		return cote;
	}
	
	void Carre::setCote(double _cote)
	{
		cote = _cote;
	}
	
	double Carre::aire()
	{
		return cote*cote;
	}
	
	void Carre::afficher(ostream & s)
	{
		s<<"Carre (x="<<ancrage.x<<", y="<<ancrage.y<<", c="<<cote<<", aire="<<aire()<<")"<<endl;
	}
	
	Carre::Carre()
	{
		ancrage.x=0;
		ancrage.y=0;
		cote=1;
	}
	Carre::Carre(Coordonnee _ancrage)
	{
		ancrage.x=_ancrage.x;
		ancrage.y=_ancrage.y;
		cote=1;
	}
	
	Carre::Carre(double _cote, Coordonnee _ancrage)
	{
		ancrage.x=_ancrage.x;
		ancrage.y=_ancrage.y;
		cote=_cote;
	}
	
	Carre::Carre(double _cote)
	{
		ancrage.x=0;
		ancrage.y=0;
		cote=_cote;
	}
	Carre::Carre(double _cote, int _x, int _y)
	{
		ancrage.x=_x;
		ancrage.y=_y;
		cote=_cote;
	}
	Carre::~Carre()	
	{
		
	}
