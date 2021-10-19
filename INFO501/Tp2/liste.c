#include"liste.h"

liste_t *creer_liste(){
    liste_t *l = (liste_t*) malloc(sizeof(liste_t));
    initialiser_liste(l);

    return l;
}

//initialise une liste vide 
void initialiser_liste(liste_t *l){
	l->tete = NULL;
}

//libère (si nécessaire) les ressources mémoire d’une liste
void detruire_liste(liste_t *l){
	if(l->tete != NULL){
		while(l->tete != NULL){
			suprimer_debut_liste(l);
		}
	}
}

//libère (si nécessaire) les ressources mémoire d’une liste
void suprimer_debut_liste(liste_t *l){
	if(l->tete != NULL && l->tete->succ != NULL){
		l->tete = l->tete->succ;//mofif
		l->tete->pred = NULL;
	}
	else if(l->tete != NULL){
	    free(l->tete);
		l->tete = NULL;
	}
}

//libère (si nécessaire) les ressources mémoire d’une liste
void suprimer_fin_liste(liste_t *l){
    if(l->tete != NULL && l->tete->succ == NULL){
        l->tete = NULL;
    }
    else{
        cellule_t *cFinListe = l->tete;
        while(cFinListe->succ != NULL) {
            cFinListe = cFinListe->succ;
        }
        cFinListe->pred->succ = NULL;
        free(cFinListe);
        cFinListe = NULL;
    }
}

//prend en paramètre un pointeur sur une cellule et insère cette cellule au début d’une liste
void inserer(liste_t *l, cellule_t *c){
	if(l->tete == NULL){
		l->tete = c;
	}
	else{
	    c->succ = l->tete;
        l->tete->pred = c;
	    l->tete = c;
	}
}

//affiche à l’écran les informations relatives à une liste 
void afficher_liste(liste_t *l){
	if(l->tete == NULL){
		printf("Liste vide!\n");
	}
	else{
		cellule_t *c = l->tete;
		while(c != NULL){
			printf("%d ", c->id_sommet);
			c=c->succ;
		}
		printf("\n");
		free(c);
		c=NULL;
	}
}

//recherche  un sommetdans une  liste et retourne  soit un pointeur sur la cellule qui contient le sommet, soit NULL
cellule_t* rechercher(liste_t *l, int sommet_recherche){
	cellule_t *c = l->tete;
	while( (c->id_sommet != sommet_recherche) && (c->succ != NULL) ){
		c=c->succ;
	}
	if(c->id_sommet != sommet_recherche){
		c = NULL;
	}

	return c;
}

//prend  en  paramètre  un  pointeur  sur  une  cellule  d'une  liste  et  supprime  cette cellule de la liste
void supprimer(liste_t *l, cellule_t* c){
	if(c->pred!=NULL){
		c->pred->succ = c->succ;
	}else{
		l->tete=c->succ;
	}
	if(c->succ != NULL){
		c->succ->pred=c->pred;
	}
        free(c);
        c=NULL;
	
}

//tete <---pred---cell---succ---> cell
