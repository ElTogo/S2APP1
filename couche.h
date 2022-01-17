/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H
#define INITIALISEE 0
#define ACTIVE 1
#define INACTIVE 2
#define CACHE 3

#include <iostream>
#include "vecteur.h"
using namespace std;

class Couche
{
protected:
	Vecteur vecteur;
	int etat;
public:
	Couche();
	virtual ~Couche();	
	
	bool ajouter(Forme*); //#3
	Forme* retirer(int); //#4
	Forme* recevoir(int); //#5
	double aireTotal(); //#6
	bool translater(int, int); //#7, les int sont les coordonnee
	bool reinitialiser(); //#8, le int est l'etat voir define^
	bool setEtat(int); //#9, le int est l'etat voir define^
	void afficher(ostream &); // #10
	int getEtat();
};

#endif
