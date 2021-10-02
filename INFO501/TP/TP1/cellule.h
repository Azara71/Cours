#ifndef CELLULE_H
#define CELLULE_H



typedef struct cellule_type{

int id_sommet;
struct cellule_type *succ;
struct cellule_type *pred;

}cellule_t;


void initialiser_cellule(cellule_t *c,int id_sommet);

#endif
