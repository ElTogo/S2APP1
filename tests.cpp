/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"
#define BARRE "----------------------------------------\n\n\n"

void Tests::tests_unitaires_formes()
{
   std::ostream & os = std::cout;
   cout<<"TESTS UNITAIRES DES FORMES"<<endl<<endl;
   Rectangle rectangle(1,2,3,4);
   rectangle.afficher(os);
   
   Carre carre(2,3,4);
   carre.afficher(os);
   
   Cercle cercle( 3.85, 1, 5);
   cercle.afficher(os);
   cout<<endl<<BARRE;
}

void Tests::tests_unitaires_vecteur()
{
	cout<<"TESTS UNITAIRES DE VECTEUR"<<endl<<endl;
	std::ostream & os = std::cout;
	
	Vecteur *vecteur = new Vecteur();
	Forme *rectangle = new Rectangle(1,1,1,1);
	Forme *cercle = new Cercle();
	Forme *carre = new Carre(2,3,4);
	cout<<"Fonction push back (3x): "<<endl;
	vecteur->push_back(rectangle);
	vecteur->push_back(cercle);
	vecteur->push_back(carre);
	cout<<"Completer\n\nFonction affichage :"<<endl;
	vecteur->afficher(os);
	cout<<"completer\n\nFcontion pop back (index 1) :"<<endl;
	vecteur->pop_back(1);
	vecteur->afficher(os);
	cout<<"completer\n\nFonction vecteur vide et vider vecteur :"<<endl;
	if (vecteur->vecteurVide()==true){cout<<"Vecteur vide, échouer"<<endl;}else{cout<<"vecteur non vide, completer"<<endl;}
	cout<<"Vidange du vecteur :"<<endl;
	vecteur->viderVecteur();
	cout<<"Vidange du vecteur appele"<<endl;
	if (vecteur->vecteurVide()==true){cout<<"Vecteur vide, completer"<<endl;}else{cout<<"vecteur non vide, échouer"<<endl;}
	cout<<"affichage du contenu (vecteur vide) : "<<endl;
	vecteur->afficher(os);
	cout<<"Completer"<<endl;
	cout<<endl<<BARRE;
}

void Tests::tests_unitaires_couche()
{
	cout<<"TESTS UNITAIRES DE COUCHE"<<endl<<endl;
	std::ostream & os = std::cout;
	
	cout<<"Création de la couche"<<endl;
	Couche couche;
	Rectangle* rectangle = new Rectangle(2,3,4,5);
	Cercle* cercle = new Cercle(2,3,4);
	Carre* carre = new Carre(4,3,2);
	Forme* forme = new Rectangle(3,3,3,3);
	
	cout<<"Fonction ajouter : "<<endl;
	couche.ajouter(rectangle);
	couche.ajouter(cercle);
	couche.ajouter(carre);
	couche.ajouter(forme);
	cout<<"Completer"<<endl<<endl;
	
	cout<<"Fonction afficher (1->init, 2->fomres: "<<endl;
	Couche couche1;
	couche1.afficher(os);
	couche.afficher(os);
	cout<<"Completer"<<endl<<endl;
	
	cout<<"Fonction recevoir (index 1) : "<<endl;
	Forme* formeRecevoir = couche.recevoir(0);
	cout<<"Affichage de la forme : "<<endl;
	if (formeRecevoir != nullptr){formeRecevoir->afficher(os);}else{cout<<"ERREUR"<<endl;}
	cout<<"Affichage du reste : "<<endl;
	couche.afficher(os);
	cout<<"Completer"<<endl<<endl;
	
	cout<<"Fonction Retirer (index 1) : "<<endl;
	Forme* formeRetirer = couche.retirer(1);
	cout<<"Affichage de la forme : "<<endl;
	if (formeRetirer != nullptr){formeRetirer->afficher(os);}else{cout<<"ERREUR"<<endl;}
	cout<<"Affichage du reste : "<<endl;
	couche.afficher(os);
	cout<<"Completer"<<endl<<endl;
	
	cout<<"Fonction aire total : "<<endl;
	cout<<"L'aire est de "<<couche.aireTotal()<<endl;
	cout<<"Completer"<<endl<<endl;
	
	cout<<"Fonction translater : "<<endl;
	couche.translater(10,10);
	couche.afficher(os);
	cout<<"Completer"<<endl<<endl;
	
	cout<<"Fonction reinitialiser : "<<endl;
	couche.reinitialiser();
	cout<<"Fonction appelee"<<endl;
	cout<<"Affichage : "<<endl;
	couche.afficher(os);
	cout<<"Completer"<<endl<<endl;
	
	cout<<"Fonction etat (1-couche vide, 2-couche caché): "<<endl;
	Couche coucheVide;
	coucheVide.setEtat(ACTIVE);
	coucheVide.afficher(os);
	couche.setEtat(INACTIVE);
	couche.afficher(os);
	cout<<"Completer"<<endl<<endl;
	cout<<endl<<BARRE;
	
}

void Tests::tests_unitaires_canevas()
{
   
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl; 
   // Il faut ajouter les operations realisant ce scenario de test.
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
