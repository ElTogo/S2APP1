/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"
using namespace std;

Couche::Couche()
{
	etat = INITIALISEE;
}

Couche::~Couche()
{
	vecteur.viderVecteur();
}


bool Couche::ajouter(Forme* _forme)
{
	if (etat == INITIALISEE){etat = ACTIVE;}
	vecteur.push_back(_forme);
	return true;
}


Forme* Couche::retirer(int index)
{
	return vecteur.pop_back(index);
}

Forme* Couche::recevoir(int index)
{
	return vecteur.get(index);
}

double Couche::aireTotal()
{
	if (etat == INITIALISEE || vecteur.getTaille()==0){return 0;}
	double aireTot = 0; 
	for (int i = 0; i < vecteur.getTaille(); i++)
	{
		aireTot += vecteur.get(i)->aire();
	}
	return aireTot;
}

bool Couche::translater(int x, int y)
{
	if (x==0 && y==0 || etat == INITIALISEE || vecteur.getTaille()==0){return false;}
	for (int i = 0; i < vecteur.getTaille(); i++)
	{
		vecteur.get(i)->translater(x,y);
	}
	return true;
}

bool Couche::reinitialiser()
{
	if (etat == INITIALISEE) {return false;}
	else{vecteur.viderVecteur(); return true;}
}

bool Couche::setEtat(int _etat)
{
	if (_etat != ACTIVE && _etat != INACTIVE){return false;}
	else if (etat == _etat) {return false;}
	else {etat = _etat; return true;}
}

void Couche::afficher(ostream & s)
{
	if (etat==INITIALISEE){s<<"Couche initialisee"<<endl;}
	else if (etat==INACTIVE){s<<"Couche cachee"<<endl;}
	else if (etat==ACTIVE && vecteur.getTaille()==0){s<<"Couche vide"<<endl;}
	else if (etat==ACTIVE && vecteur.getTaille()!=0) {vecteur.afficher(s);}
}
