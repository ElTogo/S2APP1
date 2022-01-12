graphicus-01: forme.o couche.o canevas.o tests.o graphicus-01.o
	g++ -o graphicus-01 graphicus-01.o forme.o couche.o canevas.o tests.o
	
graphicus-01.o: graphicus-01.cpp tests.h canevas.h forme.h coordonnee.h
	g++ graphicus-01.cpp -g -c
	
tests.o: tests.cpp tests.h canevas.h forme.h coordonnee.h
	g++ tests.cpp -g -c
	
canevas.o: canevas.cpp canevas.h forme.h coordonnee.h
	g++ canevas.cpp -g -c
	
couche.o: couche.cpp couche.h
	g++ couche.cpp -g -c
	
forme.o: forme.cpp forme.h coordonnee.h
	g++ forme.cpp -g -c
clean:
	rm  -f *.o
