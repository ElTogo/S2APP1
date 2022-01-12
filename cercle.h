#include <iostream>
#include "forme.h"

class Cercle: public Forme
{
public:
	double getRayon();
	void setRayon(double);
	double aire();
	virtual void afficher(ostream & s);
	
	Cercle();
	Cercle(double);
	Cercle(Coordonnee);
	Cercle(double, Coordonnee);
	Cercle(double, int, int);
	~Cercle();
	
private:
	double rayon;
};
