#ifndef VECTEUR_H
#define VECTEUR_H

#include "forme.h"
#include <iostream>

using namespace std;

class Vecteur
{
protected:
	int taille;
	int capatite;
	Forme **tableau[];
public:
	Vecteur();
	Vecteur(int);
	virtual ~Vecteur();
	
	bool push_back(Forme*);
	bool pop_back(int);
	Forme* get(int);
	bool vecteurVide();
	void viderVecteur();
	int getTaille();
	int getCapatite();
	void afficher(ostream &);
};

#endif
