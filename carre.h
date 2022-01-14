#ifndef CARRE_H
#define CARRE_H

#include "rectangle.h"

class Carre: public Rectangle
{
protected:
	double cote;
public:
	double getCote();
	void setCote(double);
	virtual double aire();
	virtual void afficher(ostream & s);
	
	Carre();
	Carre(Coordonnee);
	Carre(double, Coordonnee);
	Carre(double);
	Carre(double, int, int);
	virtual ~Carre();	
};

#endif
