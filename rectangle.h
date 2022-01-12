#include <iostream>
#include "forme.h"

class Rectangle: public Forme
{
public:	
	double getLongueur();
	void setLongueur(double);
	double getHauteur();
	void setHauteur(double);
	double aire();
	virtual void afficher(ostream & s);
	
	Rectangle();
	Rectangle(double, double);
	Rectangle(Coordonnee);
	Rectangle(double, double, Coordonnee);
	Rectangle(double, double, int, int);
	~Rectangle();	
private: 
	double longueur;
	double hauteur;
};
