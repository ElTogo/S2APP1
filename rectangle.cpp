#include "rectangle.h"

double Rectangle::getLongueur(void)
{
	return longueur;
}

void Rectangle::setLongueur(double _longueur)
{
	longueur = _longueur;
}

double Rectangle::getHauteur(void)
{
	return hauteur;
}

void Rectangle::setHauteur(double _hauteur)
{
	hauteur = _hauteur;
}

double Rectangle::aire(void)
{
	return (longueur * hauteur);
}

void Rectangle::afficher(ostream & s)
{
	s<<"Rectangle(x="<<ancrage.x<<", y="<<ancrage.y<<", l="<<longueur<<", h="<<hauteur<<", aire="<<aire()<<")"<<endl;
}

Rectangle::Rectangle()
{
	ancrage.x = 0;
	ancrage.y = 0;
	longueur = 1;
	hauteur = 1;
}

Rectangle::Rectangle(double _longueur, double _hauteur)
{
	ancrage.x = 0;
	ancrage.y = 0;
	longueur = _longueur;
	hauteur = _hauteur;
}

Rectangle::Rectangle(Coordonnee _ancrage)
{
	ancrage.x = _ancrage.x;
	ancrage.y = _ancrage.y;
	longueur = 1;
	hauteur = 1;
}

Rectangle::Rectangle(double _longueur, double _hauteur, Coordonnee _ancrage)
{
	longueur = _longueur;
	hauteur = _hauteur;
	ancrage.x = _ancrage.x;
	ancrage.y = _ancrage.y;
}

Rectangle::Rectangle(double _longueur, double _hauteur, int _x, int _y)
{
	longueur = _longueur;
	hauteur = _hauteur;
	ancrage.x = _x;
	ancrage.y = _y;
}

Rectangle::~Rectangle()
{}
