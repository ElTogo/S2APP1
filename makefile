graphicus-02: forme.o couche.o canevas.o tests.o graphicus-02.o rectangle.o carre.o cercle.o vecteur.o couche.o
	g++ -o graphicus-02 graphicus-02.o forme.o couche.o canevas.o tests.o rectangle.o carre.o cercle.o vecteur.o
	
graphicus-02.o: graphicus-02.cpp tests.h canevas.h forme.h couche.h vecteur.h carre.h cercle.h rectangle.h coordonnee.h
	g++ graphicus-02.cpp -g -c
	
tests.o: tests.cpp tests.h canevas.h forme.h couche.h vecteur.h carre.h cercle.h rectangle.h coordonnee.h
	g++ tests.cpp -g -c
	
canevas.o: canevas.cpp canevas.h couche.h vecteur.h forme.h coordonnee.h
	g++ canevas.cpp -g -c

rectangle.o: rectangle.cpp rectangle.h forme.h coordonnee.h
	g++ rectangle.cpp -g -c
	
carre.o: carre.cpp carre.h rectangle.h forme.h coordonnee.h
	g++ carre.cpp -g -c

cercle.o: cercle.cpp cercle.h forme.h coordonnee.h
	g++ cercle.cpp -g -c
	
forme.o: forme.cpp forme.h coordonnee.h
	g++ forme.cpp -g -c
	
vecteur.o: vecteur.cpp vecteur.h forme.h coordonnee.h
	g++ vecteur.cpp -g -c

couche.o: couche.cpp couche.h vecteur.h forme.h coordonnee.h
	g++ couche.cpp -g -c
clean:
	rm  -f *.o
