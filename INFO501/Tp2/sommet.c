#include <stdlib.h>
#include <stdio.h>
#include "sommet.h"

void initSommet(Sommet_t *s){
  s->pere = malloc(sizeof(Sommet_t));
  s->distance = 0;
  s->c=BLANC;
  s->id=0;
}

void afficher_sommet(Sommet_t *s){
  printf("%d ",s->id);
}