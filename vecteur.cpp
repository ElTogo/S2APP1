#include "vecteur.h"

Vecteur::Vecteur()
{
	taille=1;
	capatite=1;
	tableau[0] = new Forme*[1];
}

Vecteur::Vecteur(int _taille)
{
	taille=_taille;
	capatite=_taille;
	tableau[0] = new Forme*[capatite];
}


Vecteur::~Vecteur()
{
	for (int i = 0; i < taille; i++)
	{
		delete tableau[i];
	}
	delete *tableau;
}
	
bool Vecteur::push_back(Forme* forme)
{
	if (taille + 1 >= capatite)
	{
		capatite *= 2;
		Forme **temp = new Forme*[capatite];
		for (int i = 0; i < taille; i++)
		{
			temp[i]=*tableau[i];
		}
		*tableau=temp;
	}
	tableau[taille]=&forme;
	taille++;
	return true;
}

bool Vecteur::pop_back(int index)
{
	return false;
}

Forme* Vecteur::get(int index)
{
	return nullptr;
}

bool Vecteur::vecteurVide()
{
	return false;
}

void Vecteur::viderVecteur()
{
	
}

int Vecteur::getTaille()
{
	return 0;
}

int Vecteur::getCapatite()
{
	return 0;
}

void Vecteur::afficher(ostream &)
{
	
}

