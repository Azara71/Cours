CC = gcc -Wall -O3
OBJETS = prog_liste.o liste.o cellule.o
GRAPHE = testGraphe.o graphe.o liste.o cellule.o pile.o
PILE = testPile.o pile.o
PARCOUR = sommet.o file.o
all : prog_liste testGraphe testPile

prog_liste : $(OBJETS)
	$(CC) -o prog_liste $(OBJETS) -g

testGraphe : $(GRAPHE)
	$(CC) -o testGraphe $(GRAPHE) -g

testPile : $(Pile)
	$(CC) -o testPile $(PILE) -g

prog_liste.o : prog_liste.c liste.h
	$(CC) -c prog_liste.c -g

liste.o : liste.c liste.h cellule.h
	$(CC) -c liste.c -g

cellule.o : cellule.c cellule.h
	$(CC) -c cellule.c -g

testGraphe.o : testGraphe.c graphe.h
	$(CC) -c testGraphe.c -g

graphe.o : graphe.c graphe.h liste.h
	$(CC) -c graphe.c -g

testPile.o : testPile.c pile.h
	$(CC) -c testPile.c -g

pile.o : pile.c pile.h
	$(CC) -c pile.c -g

sommet.o : sommet.c sommet.h COULEUR.h
	$(CC) -c sommet.c -g

file.o : file.c file.h sommet.h
	$(CC) -c sommet.c -g
clean:
	rm prog_liste.exe $(OBJETS)
	rm testGraphe.exe $(GRAPHE)
	rm testPile.exe $(PILE)