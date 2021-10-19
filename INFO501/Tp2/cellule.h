#ifndef cellule_h
#define cellule_h
#include<stdio.h>
#include<stdlib.h>
typedef struct cellule_t{
	struct cellule_t *pred;
	struct cellule_t *succ;
	int id_sommet;
}cellule_t;

cellule_t *creer_cellule(int valeur);
int initialiser_cellule(cellule_t *c, int id_sommet);
#endif
