#ifndef liste_h
#define liste_h
#include"cellule.h"
typedef struct{
	struct cellule_t *tete;
}liste_t;

liste_t *creer_liste();
void initialiser_liste(liste_t *l);
void detruire_liste(liste_t *l);
void suprimer_debut_liste(liste_t *l);
void suprimer_fin_liste(liste_t *l);
void inserer(liste_t *l, cellule_t *c);
void afficher_liste(liste_t *l);
cellule_t* rechercher(liste_t *l, int sommet_recherche);
void supprimer(liste_t *l, cellule_t* c);
#endif
