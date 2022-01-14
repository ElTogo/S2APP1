/********
 * Fichier: graphicus-01.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: gestionnaire de tests pour l'application Graphicus. Ce
 *    fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
   Tests tests;
   
   //tests.tests_application();
   
   //tests.tests_unitaires_formes();
   tests.tests_unitaires_vecteur();
   return 0;
}

