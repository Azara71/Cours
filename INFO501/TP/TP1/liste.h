#ifndef LISTE_H
#define LISTE_H
#include "cellule.h"

typedef struct liste_type{


cellule_t *tete;


}liste_t;
void initialiser_liste(liste_t *l);
void detruire_liste(liste_t *l);
void inserer_liste(liste_t *l,cellule_t *t);
void supprimer_liste(liste_t *l,cellule_t *t);
cellule_t* rechercher_liste(liste_t *l,int k);
void afficher_liste(liste_t *l);

#endif
