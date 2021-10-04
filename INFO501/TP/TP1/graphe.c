#include <stdio.h>
#include "graphe.h"
#include "liste.c"



void initialiser_graphe(graphe_t *g,char a[]){

FILE *fichier;
fichier=fopen(a,"r");
int inter;
int inter_2;
int liste_current;
cellule_t l_cellule[12];
cellule_t try_cellule[5];
cellule_t tata;
	// Lecture du nb sommet
	if (fichier!=NULL){
		initialiser_cellule(&tata,5);
		try_cellule[0]=tata;
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
			//printf("SOMMET:%d",(g->l_adj+i)->tete->id_sommet);	

		}

		// Placement aux arêtes
		fseek(fichier,17,SEEK_CUR);
		fscanf(fichier,"%d",&liste_current);
		inter=liste_current;
		for(int j=0;j<11;j++){
		

		
			if(inter==liste_current){
				
				fscanf(fichier,"%d",&inter_2);
				printf("inter2 : %d\n",inter_2);	
				fseek(fichier,1,SEEK_CUR);
				fscanf(fichier,"%d",&inter);
			}
			else {
				liste_current=inter;
				printf("MA CURRENT LISTE EST %d",liste_current);
			
			}




		/*
			fscanf(fichier,"%d",&inter);
			fseek(fichier,1,SEEK_CUR);
			fscanf(fichier,"%d",&inter_2);
			printf("\n%d",inter);
			printf("%d",inter_2);
			inserer_liste((g->l_adj+inter),&l_cellule[inter_2]);
		*/
		}
		
		
		
		
		/*
			fscanf(fichier,"%d",&inter);
			fseek(fichier,1,SEEK_CUR);
			fscanf(fichier,"%d",&inter_2);
			printf("\n%d,%d\n",inter,inter_2);
			printf("CELLULEGAUCHE LU %d:",(l_cellule[inter].id_sommet));
			printf("CELLULEDROITE LU %d:",(l_cellule[inter_2].id_sommet));
			inserer_liste((g->l_adj+0),&l_cellule[inter]);
		*/
		
			

		/*
			printf("TEST\n");
			printf("%d:",(l_cellule[inter_2].id_sommet));
			inserer_liste((g->l_adj+0),&tata);
			afficher_liste((g->l_adj+0));
		*/
		
			
		
		//inserer_liste((g->l_adj+inter),&l_cellule[inter_2]);

	}
	else {
		printf("Erreur lors de l'ouverture du fichier");
	}


};


void afficher_graphe(graphe_t mon_graphe){};
void detruire_graphe(graphe_t mon_graphe){};

int main()
{
char c[]="t";
graphe_t g;
initialiser_graphe(&g,"graphe1.txt");

}
