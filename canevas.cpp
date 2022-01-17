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
	for (int i=0; i<=MAX_COUCHES;i++)
   	{
   		couches[i].reinitialiser();
   	}
   	return true;
}

bool Canevas::activerCouche(int index)
{
   couches[coucheActive].setEtat(INACTIVE);
   coucheActive = index;
   return couches[index].setEtat(ACTIVE);
}

bool Canevas::cacherCouche(int index)
{
   return couches[index].setEtat(INACTIVE);
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   /*for (int i =0; i<=MAX_COUCHES; i++)
   {
   	if (couches[i].getEtat() == ACTIVE)
   	{
   		coucheActive=i;
   	}
   	
   }*/
   return couches[coucheActive].ajouter(p_forme);
}

bool Canevas::retirerForme(int index)
{
   Forme* forme = couches[index].retirer(index);
   if (forme == nullptr){return false;}
   else {return true;}
}

double Canevas::aire()
{
   double aireTot = 0;
	for (int i = 0; i<=MAX_COUCHES;i++) 
	{ 
		for (int i = 0; i <= MAX_COUCHES; i++)
		{
			aireTot += couches[i].aireTotal();
		}
	}
	return aireTot;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return couches[coucheActive].translater(deltaX,deltaY);
}

void Canevas::afficher(ostream & s)
{
	for (int i=0; i<=MAX_COUCHES;i++)
	{
		s << "----- Couche "<<i<<endl;
		couches[i].afficher(s);
	}
	
}
