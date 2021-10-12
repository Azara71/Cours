#ifndef SOMMET_H
#define SOMMET_H
#include <stdio.h>
#include <stdlib.h>
#include "cellule.h"
#include "COULEUR.h"

typedef struct Sommet_t{
  COULEUR c;
  int id;
  int distance;
  Sommet_t *pere;
}Sommet_t;

void initSommet(Sommet_t*);
void afficher_sommet(Sommet_t*);

#endif 