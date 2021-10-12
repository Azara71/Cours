#include"liste.h"

int main(){
	liste_t l1;
	initialiser_liste(&l1);

	cellule_t c1;
	initialiser_cellule(&c1, 3);
	inserer(&l1, &c1);

	cellule_t c2;
	initialiser_cellule(&c2, 5);
	inserer(&l1, &c2);

	cellule_t c3;
	initialiser_cellule(&c3, 8);
	inserer(&l1, &c3);

    inserer(&l1, creer_cellule(2));

    inserer(&l1, creer_cellule(9));

    inserer(&l1, creer_cellule(7));
	
	printf("liste l1 : \n");
	afficher_liste(&l1);
	
	cellule_t *cRecherche;
	cRecherche = rechercher(&l1, 5);
	printf("Recherche de la valeur 5 : \n");
	if(cRecherche == NULL){
		printf("il n'y a pas la valeur rechercher\n");
	}
	else{
		printf("valeur rechercher = %d\n", cRecherche->id_sommet);
	}

	cRecherche = rechercher(&l1, 4);
	printf("Recherche de la valeur 4 : \n");
	if(cRecherche == NULL){
		printf("il n'y a pas la valeur rechercher\n");
	}
	else{
		printf("valeur rechercher = %d\n", cRecherche->id_sommet);
	}
	
	printf("suppression du premier element : \n");
	suprimer_debut_liste(&l1);	
	afficher_liste(&l1);

    printf("suppression  fifo : \n");
    suprimer_fin_liste(&l1);
    afficher_liste(&l1);
	
	printf("suppression de 8 : \n");
	supprimer(&l1,&c3);
	afficher_liste(&l1);

    printf("suppression de 5 : \n");
    supprimer(&l1,&c2);
    afficher_liste(&l1);

	printf("destruction de la liste : \n");
	detruire_liste(&l1);
	afficher_liste(&l1);

	return 0;
}

// compiler : gcc -o prog_l prog_liste.c cellule.c liste.c
// executer : ./prog_l

