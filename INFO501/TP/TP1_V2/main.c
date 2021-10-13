#include "liste.c"
#include "cellule.c"
#include "graphe.h"
#include <stdio.h>



int main()
{
	cellule_t c;
	cellule_t c2;
	cellule_t c3;
	liste_t l;
	
	initialiser_cellule(&c,5);
	initialiser_cellule(&c2,10);
	initialiser_cellule(&c3,12);
	

	
	initialiser_liste(&l);
	
	inserer_liste(&l,&c);
	printf("Affichage liste");
	afficher_liste(&l);
	
	printf("\nOn rajoute une nouvelle cellule,la liste devient donc :");
	
	inserer_liste(&l,&c2);
	inserer_liste(&l,&c3);
	afficher_liste(&l);
	
	printf("\non recherche 40 : %d",rechercher_liste(&l,40)->id_sommet);
	printf("\nON recherche 10 :%d",rechercher_liste(&l,10)->id_sommet);
	printf("\nON va supprimer %d",c.id_sommet);
	supprimer_liste(&l,&c3);
	printf("\nNouvelle liste");
	afficher_liste(&l);
	
	
	
	
	
	return(0);
}

