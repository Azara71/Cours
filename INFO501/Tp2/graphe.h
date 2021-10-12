#ifndef graphe_h
#define graphe_h
#include"liste.h"
typedef struct graphe_t{
	int nb_sommets;
	int orienter;
	int valuer;
	int **matriceAdjacence;
	liste_t **listeAdjacences;
}graphe_t;

int initialiser_graphe(graphe_t *g, char *nomFichier);
void afficher_graphe(graphe_t *g);
int detruire_graphe(graphe_t *g);
#endif
