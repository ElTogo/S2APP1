#ifndef VECTEUR_H
#define VECTEUR_H

#include "forme.h"
#include <iostream>

using namespace std;

class Vecteur
{
protected:
	int taille;
	int capacite;
	Forme** tableau;
public:
	Vecteur();
	Vecteur(int);
	virtual ~Vecteur();
	
	bool push_back(Forme*);
	Forme* pop_back(int);
	Forme* get(int);
	bool vecteurVide();
	void viderVecteur();
	int getTaille();
	int getCapacite();
	void afficher(ostream &);
};

#endif
