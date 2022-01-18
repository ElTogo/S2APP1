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

void Tests::tests_unitaires_formes(ostream & os)
{
   os<<"TESTS UNITAIRES DES FORMES"<<endl<<endl;
   Rectangle rectangle(1,2,3,4);
   rectangle.afficher(os);
   
   Carre carre(2,3,4);
   carre.afficher(os);
   
   Cercle cercle( 3.85, 1, 5);
   cercle.afficher(os);
   os<<endl<<BARRE;
}

void Tests::tests_unitaires_vecteur(ostream & os)
{
	os<<"TESTS UNITAIRES DE VECTEUR"<<endl<<endl;
	
	Vecteur *vecteur = new Vecteur();
	Forme *rectangle = new Rectangle(1,1,1,1);
	Forme *cercle = new Cercle();
	Forme *carre = new Carre(2,3,4);
	os<<"Fonction push back (3x): "<<endl;
	vecteur->push_back(rectangle);
	vecteur->push_back(cercle);
	vecteur->push_back(carre);
	os<<"Completer\n\nFonction affichage :"<<endl;
	vecteur->afficher(os);
	os<<"completer\n\nFcontion pop back (index 1) :"<<endl;
	vecteur->pop_back(1);
	vecteur->afficher(os);
	os<<"completer\n\nFonction vecteur vide et vider vecteur :"<<endl;
	if (vecteur->vecteurVide()==true){os<<"Vecteur vide, échouer"<<endl;}else{os<<"vecteur non vide, completer"<<endl;}
	os<<"Vidange du vecteur :"<<endl;
	vecteur->viderVecteur();
	os<<"Vidange du vecteur appele"<<endl;
	if (vecteur->vecteurVide()==true){os<<"Vecteur vide, completer"<<endl;}else{os<<"vecteur non vide, échouer"<<endl;}
	os<<"affichage du contenu (vecteur vide) : "<<endl;
	vecteur->afficher(os);
	os<<"Completer"<<endl;
	os<<endl<<BARRE;
}

void Tests::tests_unitaires_couche(ostream & os)
{
	os<<"TESTS UNITAIRES DE COUCHE"<<endl<<endl;
	
	os<<"Création de la couche"<<endl;
	Couche couche;
	Rectangle* rectangle = new Rectangle(2,3,4,5);
	Cercle* cercle = new Cercle(2,3,4);
	Carre* carre = new Carre(4,3,2);
	Forme* forme = new Rectangle(3,3,3,3);
	
	os<<"Fonction ajouter : "<<endl;
	couche.ajouter(rectangle);
	couche.ajouter(cercle);
	couche.ajouter(carre);
	couche.ajouter(forme);
	os<<"Completer"<<endl<<endl;
	
	os<<"Fonction afficher (1->init, 2->fomres: "<<endl;
	Couche couche1;
	couche1.afficher(os);
	couche.afficher(os);
	os<<"Completer"<<endl<<endl;
	
	os<<"Fonction recevoir (index 0) : "<<endl;
	Forme* formeRecevoir = couche.recevoir(0);
	os<<"Affichage de la forme : "<<endl;
	if (formeRecevoir != nullptr){formeRecevoir->afficher(os);}else{os<<"ERREUR"<<endl;}
	os<<"Affichage du reste : "<<endl;
	couche.afficher(os);
	os<<"Completer"<<endl<<endl;
	
	os<<"Fonction Retirer (index 1) : "<<endl;
	Forme* formeRetirer = couche.retirer(1);
	os<<"Affichage de la forme : "<<endl;
	if (formeRetirer != nullptr){formeRetirer->afficher(os);}else{os<<"ERREUR"<<endl;}
	os<<"Affichage du reste : "<<endl;
	couche.afficher(os);
	os<<"Completer"<<endl<<endl;
	
	os<<"Fonction aire total : "<<endl;
	os<<"L'aire est de "<<couche.aireTotal()<<endl;
	os<<"Completer"<<endl<<endl;
	
	os<<"Fonction translater : "<<endl;
	couche.translater(10,10);
	couche.afficher(os);
	os<<"Completer"<<endl<<endl;
	
	os<<"Fonction reinitialiser : "<<endl;
	couche.reinitialiser();
	os<<"Fonction appelee"<<endl;
	os<<"Affichage : "<<endl;
	couche.afficher(os);
	os<<"Completer"<<endl<<endl;
	
	os<<"Fonction etat (1-couche vide, 2-couche caché): "<<endl;
	Couche coucheVide;
	coucheVide.setEtat(ACTIVE);
	coucheVide.afficher(os);
	couche.setEtat(INACTIVE);
	couche.afficher(os);
	os<<"Completer"<<endl<<endl;
	os<<endl<<BARRE;
	
}

void Tests::tests_unitaires_canevas(ostream & os)
{
	os<<"TESTS UNITAIRES DE CANEVAS"<<endl<<endl;
	Canevas canevas;
	
	os<<endl<<"Réinitialisation du Canevas"<<endl;
	canevas.reinitialiser();
	
	os<<endl<<"Activer couche"<<endl;
	canevas.activerCouche(0);
	os<<"La couche 0 est activer"<<endl;
	
	os<<endl<<"Cacher couche"<<endl;
	canevas.cacherCouche(0);
	os<<"La couche 0 est cacher"<<endl;
	
	os<<endl<<"Ajouter forme (dans plusieurs couche)"<<endl;
	canevas.activerCouche(1);
	Forme* cercle = new Cercle(1,2,3);
	canevas.ajouterForme(cercle);
	canevas.activerCouche(2);
	Forme* rectangle = new Rectangle(2,3,4,5);
	canevas.ajouterForme(rectangle);
	canevas.afficher(os);
	
	os<<endl<<"Aire"<<endl;
	os<<"L'aire est de "<<canevas.aire()<<endl;
	
	os<<endl<<"Translater (2,2)"<<endl;
	canevas.translater(2,2);
	canevas.afficher(os);
	
	os<<endl<<"Retirer forme"<<endl;
	canevas.retirerForme(0);
	canevas.afficher(os);

	os<<BARRE;
	
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires

	std::ostream & os = std::cout;
   tests_unitaires_formes(os);
   tests_unitaires_vecteur(os);
   tests_unitaires_couche(os);
   tests_unitaires_canevas(os);
}

void Tests::tests_application()
{
  
  
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
	Canevas canevas;
	os<<endl<<"ETAPE 1 à 6"<<endl<<endl;
   //os << "TESTS APPLICATION (CAS 01)" << endl<<endl; 
   
    Rectangle* rectangle = new Rectangle(2,3,0,0);
   Rectangle* rectangle2 = new Rectangle(4,5,0,0);
   Carre* carre = new Carre(4,2,3);
   Cercle* cercle = new Cercle(6,7,8);
   
  os<<"Étape 1 : Activer la couche 1"<<endl;
  os<<"Étape 2 : Ajouter trois formes géométriques à cette couche"<<endl<<"  Un rectangle (x=0, y=0, largeur=2, hauteur=3)"<<endl<<"  Un carré (x=2, y=3, côté=4)"<<endl<<"  Un cercle (x=7, y=8, rayon=6)"<<endl;
  os<<"Étape 3 : Activer la couhce 2"<<endl;
  os<<"Étape 4 : Ajouter une forme géométrique"<<endl<<  "  Un rectangle (x=0, y=0, largeur=4, hauteur=5)"<<endl;
  os<<"Étape 5 : Afficher le canevas"<<endl;
    os<<"Étape 6 : Afficher l'aire du canevas"<<endl<<endl;
  
   canevas.activerCouche(1);
   
   canevas.ajouterForme(rectangle);
   canevas.ajouterForme(carre);
   canevas.ajouterForme(cercle);
  
  
    canevas.activerCouche(2);
     canevas.ajouterForme(rectangle2);
     canevas.afficher(os);
     os<<"L'aire est :"<<canevas.aire()<<endl<<endl;
   
   
  os<<endl<<"ETAPES 7 A 13"<<endl<<endl;
    os<<"Étape 7 : Activer la couche 0 et y ajouter trois formes géométriques"<<endl<<"  Un rectangle (x=0, y=0, largeur=1, hauteur=1)"<<endl<<"  Un carré (x=0, y=0, côté=1)"<<endl<<"  Un cercle (x=0, y=0, rayon=1)"<<endl;
    os<<"Étape 8 : Activer couche 1 et faire une translation de x=5 et y=5"<<endl;
    os<<"les nouvelle coordonnées des formes devraient être :"<<endl<<"  Un rectangle (x=5, y=5, largeur=2, hauteur=3)"<<endl<<"  Un carré (x=7, y=8, côté=4)"<<endl<<"  Un cercle (x=12, y=13, rayon=6)"<<endl;
    os<<"Étape 9 : Initialisée couche 2"<<endl;
    os<<"Étape 10 : Initialisée couche 3 -> couche vides"<<endl;
     os<<"Étape 11 : Initialisée couche 4 -> couche vides"<<endl;
    os<<"Étape 12 : Afficher le canevas"<<endl;
    os<<"Étape 13 : Afficher l'Aire du canevas"<<endl<<endl;
  canevas.activerCouche(0);
  Forme* forme = new Rectangle;
  canevas.ajouterForme(forme);
  Forme* forme2 = new Carre;
  canevas.ajouterForme(forme2);
  Forme* forme3 = new Cercle;
  canevas.ajouterForme(forme3);
  canevas.activerCouche(1);
  canevas.translater(5,5);
  canevas.afficher(os);
  os<<"L'aire est de "<<canevas.aire()<<endl<<endl;
  
   
  os<<endl<<"ETAPES 14 A 16"<<endl<<endl;
  os<<"Étape 14 : Retirer la première forme de la couche 1"<<endl;
  os<<"Étape 15 : Afficher le canevas"<<endl;
  os<<"Étape 16 : Afficher l'aire du canevas"<<endl<<endl;
  
  canevas.activerCouche(1);
  canevas.retirerForme(0);
  canevas.afficher(os);
   
  os<<endl<<"ETAPES 17 A 19"<<endl;
  os<<"Étape 17 : Réinitialiser le canevas"<<endl;
  os<<"Étape 18 : Afficher le canevas"<<endl;
  os<<"Étape 19 : Afficher l'aire du canevas"<<endl<<endl;
  canevas.reinitialiser();
  canevas.afficher(os);
  os<<"L'aire est de "<<canevas.aire()<<endl<<endl;
  
}

void Tests::tests_application_cas_02()
{
   os << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
