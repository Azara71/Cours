#include "liste.h"
#include "cellule.h"
#include "cellule.c"
#include <stdio.h>
#include <stdlib.h>



void initialiser_liste(liste_t *l)
{

	l->tete=NULL;


}


void detruire_liste(liste_t *l)
{
	/* NON IMPLEMENTERcellule_t *inter;
	
	if(l->tete!=NULL){
	
		while(l->tete!=NULL)
		{
	
		
		}
	
	}
*/
}


void inserer_liste(liste_t *l,cellule_t *t){
	
	if(l->tete!=NULL){
	
			printf("On a inseré %d dans : %d\n",l->tete->id_sommet,t->id_sommet);
	}
	
	t->succ=l->tete;

	

	
	
	if(l->tete==NULL){
		
		l->tete=t;

	
	}
	
			

		l->tete->pred=t;	
		l->tete=t;
		t->pred=NULL;

	
}

void supprimer_liste(liste_t *l,cellule_t *t){

	if(t->pred!=NULL){
		t->pred->succ=t->succ;
	}
	else{
		l->tete=t->succ;
	}
	if(t->succ!=NULL){
		t->succ->pred=t->pred;
	}
	
	}
	
cellule_t* rechercher_liste(liste_t *l,int k){

	cellule_t *c;
	
	if(l->tete == NULL){
		return(0);
	}
	else{
		c=l->tete;
		
	while((c->succ != NULL) && ( c->id_sommet != k)){
		c=c->succ;
		}

		
		if(c->id_sommet == k){
		return(c);
		}
		else {
		
		return(c);
		}
	}
	
}
	
	



void afficher_liste(liste_t *l){

cellule_t *current;



	if(l->tete!=NULL){

		
		current=l->tete;

		printf("\n");
		while(current!=NULL){
		
		printf("%d-",current->id_sommet);
		current=current->succ;
		}
	}

}
/*
int main()
{
	liste_t l1;
	cellule_t c1;
	initialiser_liste(&l1);
	initialiser_cellule(&c1,50);
	//inserer_liste(&l1,&c1);

}*/








