#ifndef GRAPHE_H
#define GRAPHE_H
#include "liste.h"

typedef struct graphe_type{

	int nb_sommets;
	int oriente;
	int value;
	liste_t *l_adj;
	int **m_adj;
	int *m_stockage;


}graphe_t;

void initialiser_graphe(graphe_t *g,char a[]);
void test_fichier(char a[]);
void afficher_graphe(graphe_t mon_graphe);
void detruire_graphe(graphe_t mon_graphe);


#endif
