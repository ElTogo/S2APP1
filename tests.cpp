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
	
	cout<<"Fonction recevoir (index 0) : "<<endl;
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
	cout<<"TESTS UNITAIRES DE CANEVAS"<<endl<<endl;
	std::ostream & os = std::cout;
	Canevas canevas;
	
	cout<<endl<<"Réinitialisation du Canevas"<<endl;
	canevas.reinitialiser();
	
	cout<<endl<<"Activer couche"<<endl;
	canevas.activerCouche(0);
	cout<<"La couche 0 est activer"<<endl;
	
	cout<<endl<<"Cacher couche"<<endl;
	canevas.cacherCouche(0);
	cout<<"La couche 0 est cacher"<<endl;
	
	cout<<endl<<"Ajouter forme (dans plusieurs couche)"<<endl;
	canevas.activerCouche(1);
	Forme* cercle = new Cercle(1,2,3);
	canevas.ajouterForme(cercle);
	canevas.activerCouche(2);
	Forme* rectangle = new Rectangle(2,3,4,5);
	canevas.ajouterForme(rectangle);
	canevas.afficher(os);
	
	cout<<endl<<"Aire"<<endl;
	cout<<"L'aire est de "<<canevas.aire()<<endl;
	
	cout<<endl<<"Translater (2,2)"<<endl;
	canevas.translater(2,2);
	canevas.afficher(os);
	
	cout<<endl<<"Retirer forme"<<endl;
	canevas.retirerForme(0);
	canevas.afficher(os);

	cout<<BARRE;
	
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
    std::ostream & os = std::cout;
	Canevas canevas;
	cout<<endl<<"ETAPE 1 à 6"<<endl<<endl;
   //cout << "TESTS APPLICATION (CAS 01)" << endl<<endl; 
   
    Rectangle* rectangle = new Rectangle(2,3,0,0);
   Rectangle* rectangle2 = new Rectangle(4,5,0,0);
   Carre* carre = new Carre(4,2,3);
   Cercle* cercle = new Cercle(6,7,8);
   
  cout<<"Étape 1 : Activer la couche 1"<<endl;
  cout<<"Étape 2 : Ajouter trois formes géométriques à cette couche"<<endl<<"  Un rectangle (x=0, y=0, largeur=2, hauteur=3)"<<endl<<"  Un carré (x=2, y=3, côté=4)"<<endl<<"  Un cercle (x=7, y=8, rayon=6)"<<endl;
  cout<<"Étape 3 : Activer la couhce 2"<<endl;
  cout<<"Étape 4 : Ajouter une forme géométrique"<<endl<<  "  Un rectangle (x=0, y=0, largeur=4, hauteur=5)"<<endl;
  cout<<"Étape 5 : Afficher le canevas"<<endl;
    cout<<"Étape 6 : Afficher l'aire du canevas"<<endl<<endl;
  
   canevas.activerCouche(1);
   
   canevas.ajouterForme(rectangle);
   canevas.ajouterForme(carre);
   canevas.ajouterForme(cercle);
  
  
    canevas.activerCouche(2);
     canevas.ajouterForme(rectangle2);
     canevas.afficher(os);
     cout<<"L'aire est :"<<canevas.aire()<<endl<<endl;
   
   
  cout<<endl<<"ETAPES 7 A 13"<<endl<<endl;
    cout<<"Étape 7 : Activer la couche 0 et y ajouter trois formes géométriques"<<endl<<"  Un rectangle (x=0, y=0, largeur=1, hauteur=1)"<<endl<<"  Un carré (x=0, y=0, côté=1)"<<endl<<"  Un cercle (x=0, y=0, rayon=1)"<<endl;
    cout<<"Étape 8 : Activer couche 1 et faire une translation de x=5 et y=5"<<endl;
    cout<<"les nouvelle coordonnées des formes devraient être :"<<endl<<"  Un rectangle (x=5, y=5, largeur=2, hauteur=3)"<<endl<<"  Un carré (x=7, y=8, côté=4)"<<endl<<"  Un cercle (x=12, y=13, rayon=6)"<<endl;
    cout<<"Étape 9 : Initialisée couche 2"<<endl;
    cout<<"Étape 10 : Initialisée couche 3 -> couche vides"<<endl;
     cout<<"Étape 11 : Initialisée couche 4 -> couche vides"<<endl;
    cout<<"Étape 12 : Afficher le canevas"<<endl;
    cout<<"Étape 13 : Afficher l'Aire du canevas"<<endl<<endl;
  canevas.activerCouche(0);
  Forme* forme = new Rectangle;
  canevas.ajouterForme(forme);
  Forme* forme2 = new Carre;
  canevas.ajouterForme(forme2);
  Forme* forme3 = new Cercle;
  canevas.ajouterForme(forme3);
  canevas.activerCouche(1);
  canevas.translater(5,5);
  Forme* forme4 = new Rectangle(2,3,5,5);
  canevas.ajouterForme(forme4);
  Forme* forme5 = new Carre(4,7,8);
  canevas.ajouterForme(forme5);
  Forme* forme6 = new Cercle(6,12,13);
  canevas.ajouterForme(forme6);
  canevas.afficher(os);
  cout<<"L'aire est de "<<canevas.aire()<<endl<<endl;
  
   
  cout<<endl<<"ETAPES 14 A 16"<<endl<<endl;
  cout<<"Étape 14 : Retirer la première forme de la couche 1"<<endl;
  cout<<"Étape 15 : Afficher le canevas"<<endl;
  cout<<"Étape 16 : Afficher l'aire du canevas"<<endl<<endl;
  
  canevas.activerCouche(1);
  canevas.retirerForme(0);
  canevas.afficher(os);
   
  cout<<endl<<"ETAPES 17 A 19"<<endl;
  cout<<"Étape 17 : Réinitialiser le canevas"<<endl;
  cout<<"Étape 18 : Afficher le canevas"<<endl;
  cout<<"Étape 19 : Afficher l'aire du canevas"<<endl<<endl;
  canevas.reinitialiser();
  canevas.afficher(os);
  cout<<"L'aire est de "<<canevas.aire()<<endl<<endl;
  
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
