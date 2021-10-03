#include <stdio.h>
#include "graphe.h"
#include "liste.c"



void initialiser_graphe(graphe_t *g,char a[]){

FILE *fichier;
fichier=fopen(a,"r");
int inter;
int inter_2;
cellule_t l_cellule[50];

	// Lecture du nb sommet
	if (fichier!=NULL){
		//Lecture nb_sommet
		fseek(fichier,10,SEEK_SET);
		fscanf(fichier,"%d",&g->nb_sommets);
		printf("nb_sommet :%d",g->nb_sommets);
		//Lecture oriente
		fseek(fichier,10,SEEK_CUR);
		fscanf(fichier,"%d",&g->oriente);
		printf("oriente:%d",g->oriente);
		//Lecture value
		fseek(fichier,7,SEEK_CUR);
		fscanf(fichier,"%d",&g->value);
		printf("value:%d",g->value);
		
		g->l_adj=malloc(g->nb_sommets * sizeof(cellule_t));
		
		// initialisation des n_listes et des n cellules
		for(int i=0;i<g->nb_sommets;i++){
			
			initialiser_liste((g->l_adj+i));
			initialiser_cellule(&(l_cellule[i]),i);
			inserer_liste((g->l_adj+i),&l_cellule[i]);
			printf("SOMMET:%d",(g->l_adj+i)->tete->id_sommet);	
		}

		// Placement aux arêtes
		fseek(fichier,20,SEEK_CUR);


		for(int j=0;j<8;j++){
		
			fscanf(fichier,"%d",&inter);
			fseek(fichier,1,SEEK_CUR);
			fscanf(fichier,"%d",&inter_2);
			printf("\n%d,%d\n",inter,inter_2);
			//Faire le si n'existe pas.
			inserer_liste((g->l_adj+inter),&l_cellule[inter_2]);

		}
			
		
		
		

	}
	else {
		printf("Erreur lors de l'ouverture du fichier");
	}

		afficher_liste((g->l_adj+inter));
};


void afficher_graphe(graphe_t mon_graphe){};
void detruire_graphe(graphe_t mon_graphe){};

int main()
{
char c[]="t";
graphe_t g;
initialiser_graphe(&g,"graphe1.txt");

}
