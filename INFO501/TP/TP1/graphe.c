#include <stdio.h>
#include <stdlib.h>
#include "graphe.h"
#include "liste.c"
#include <string.h>



void initialiser_graphe(graphe_t *g,char a[]){

FILE *fichier;
fichier=fopen(a,"r");
char ch[255];
char findef[15]="FIN_DEF_ARETES\0";
int i=0;
int x=0;
int y=0;
cellule_t *ptr_cellule;

	// Lecture du nb sommet
	if (fichier!=NULL){

		//Lecture nb_sommet
		fscanf(fichier,"%s",ch);
		printf("%s",ch);
		fscanf(fichier,"%d",&g->nb_sommets);
		printf("%d",g->nb_sommets);
		fscanf(fichier,"%s",ch);
		printf("%s",ch);
		fscanf(fichier,"%d",&g->oriente);
		printf("%d",g->oriente);
		fscanf(fichier,"%s",ch);
		printf("%s",ch);
		fscanf(fichier,"%d",&g->value);
		printf("%d",g->value);
		g->l_adj=malloc(g->nb_sommets * sizeof(cellule_t));
		fscanf(fichier,"%s",ch);
		printf("%s\n",ch);
		
		while(strcmp(ch,findef)!=0){
		      	fscanf(fichier,"%s",ch);
		      		if(strcmp(ch,findef)!=0){
		      			x=atoi(ch);
		      			fscanf(fichier,"%d",&y);
		      			
		      			
		      			if(g->oriente==0){

						ptr_cellule=malloc(sizeof(cellule_t));
		      				initialiser_cellule(ptr_cellule,x);
						inserer_liste(&g->l_adj[y],ptr_cellule);
		      			
		      			
		      			
		      			}
		      			else if(g->oriente==1){

		      				
		      			}
		      		//FAIRE UN MALLOC POUR CHAQUE VALEUR, CREER LA CELLULE, QU'ON INSERE DANS TAB[i];
		      				
		      			

					
		      		}
		      	
		      	


		}

};
}

void afficher_graphe(graphe_t mon_graphe){};
void detruire_graphe(graphe_t mon_graphe){};

int main()
{
char c[]="t";
graphe_t g;
initialiser_graphe(&g,"graphe1.txt");

}
