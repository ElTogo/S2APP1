/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas()
{
	coucheActive = 0;
	couches[0].setEtat(ACTIVE);
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
	for (int i=0; i<MAX_COUCHES;i++)
   	{
   		couches[i+1].reinitialiser();
   	}
   	return true;
}

bool Canevas::activerCouche(int index)
{
   for (int i = 0; i<MAX_COUCHES;i++)
   {
   	couches[i+1].setEtat(INACTIVE);
   }
   couches[index].setEtat(ACTIVE);
   
   return true;
}

bool Canevas::cacherCouche(int index)
{
   couches[index].setEtat(INACTIVE);
   return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   
   for (int i =0; i<MAX_COUCHES; i++)
   {
   	if (couches[i+1].getEtat() == ACTIVE)
   	{
   		coucheActive=i+1;
   	}
   	
   }
   return true;
}

bool Canevas::retirerForme(int index)
{
   return true;
}

double Canevas::aire()
{
   return 0.0;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return true;
}

void Canevas::afficher(ostream & s)
{
}
