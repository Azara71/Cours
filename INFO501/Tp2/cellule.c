#include"cellule.h"

cellule_t *creer_cellule(int valeur){
    cellule_t* c = (cellule_t*) malloc(sizeof(cellule_t));
    initialiser_cellule(c, valeur);

    return c;
}

int initialiser_cellule(cellule_t *c, int id_sommet){
	c->pred=NULL;
	c->succ=NULL;
	c->id_sommet = id_sommet;

	return 0;
}
