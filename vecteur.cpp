#include "vecteur.h"

Vecteur::Vecteur()
{
	taille=0;
	capacite=1;
	tableau = new Forme*[1];
}

Vecteur::Vecteur(int _capacite)
{
	taille=0;
	capacite=_capacite;
	tableau = new Forme*[capacite];
}


Vecteur::~Vecteur()
{
	for (int i = 0; i < taille; i++)
	{
		delete tableau[i];
	}
	//delete tableau;
}
	
bool Vecteur::push_back(Forme* forme)
{
	if (forme == nullptr) {return false;}
	if (taille>= capacite)
	{
		capacite *= 2;
		Forme **temp = new Forme*[capacite];
		for (int i = 0; i < taille; i++)
		{
			temp[i]=tableau[i];
		}
		tableau=temp;
	}
	tableau[taille]=forme;
	taille++;
	return true;
}

Forme* Vecteur::pop_back(int index)
{
	Forme* temp = tableau[index];
	for (int i = index; i < taille; i++)
	{
		tableau[i]=tableau[i+1];
	}
	taille--;
	return temp;
}

Forme* Vecteur::get(int index)
{
	if(index>=taille){return nullptr;}
	else{return tableau[index];}
}

bool Vecteur::vecteurVide()
{
	if (taille == 0){return true;}
	else{return false;}
}

void Vecteur::viderVecteur()
{
	/*for (int i = 0; i < taille; i++)
	{
		delete tableau[i];
	}*/
	taille=0;
}

int Vecteur::getTaille()
{
	return taille;
}

int Vecteur::getCapacite()
{
	return capacite;
}

void Vecteur::afficher(ostream & os)
{
	for (int i = 0; i < taille; i++)
	{
		tableau[i]->afficher(os);
	}
}

