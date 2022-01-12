#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"

class Rectangle: public Forme
{
public:	
	double getLongueur();
	void setLongueur(double);
	double getHauteur();
	void setHauteur(double);
	virtual double aire();
	virtual void afficher(ostream & s);
	
	Rectangle();
	Rectangle(double, double);
	Rectangle(Coordonnee);
	Rectangle(double, double, Coordonnee);
	Rectangle(double, double, int, int);
	virtual ~Rectangle();	
protected: 
	double longueur;
	double hauteur;
};

#endif
