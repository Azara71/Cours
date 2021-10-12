#include"graphe.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int initialiser_graphe(graphe_t *g, char *nomFichier){
	FILE *fichier = NULL;
	char buffer[50]="";
	char debut[17]="";
	char fin[15]="";
	int i=0, j=0;
	int sommet1=0, sommet2=0;
	
	fichier = fopen(nomFichier, "r+");
	if(fichier != NULL){
		//fseek(fichier, 10, SEEK_SET);// SEEK_SET : début du fichier
        fscanf(fichier,"%s",buffer);
		fscanf(fichier,"%d",&g->nb_sommets);
		
		// Allocation et initialisation de la matrice d'adjacence
		g->matriceAdjacence=malloc(sizeof(int*)*g->nb_sommets);
		for(i=0;i<g->nb_sommets;i++){
			g->matriceAdjacence[i]=malloc(sizeof(int)*g->nb_sommets);
			for(j=0;j<g->nb_sommets;j++){
				g->matriceAdjacence[i][j]=0;
			}
		}
		
		// Initialisation de la liste d'adjacence
		g->listeAdjacences=(liste_t**)malloc(sizeof(liste_t*)*g->nb_sommets);
		for(i=0;i<g->nb_sommets;i++){
		    //liste_t l;
			//initialiser_liste(&l);
			g->listeAdjacences[i] = creer_liste();
		}

		//fseek(fichier, 7, SEEK_CUR); // SEEK_CUR : position courante du curseur
        fscanf(fichier,"%s",buffer);
		fscanf(fichier,"%d",&g->orienter);

		//fseek(fichier, 6, SEEK_CUR);
        fscanf(fichier,"%s",buffer);
		fscanf(fichier,"%d",&g->valuer);

        fscanf(fichier,"%s",debut);

		// Lecture des arrêtes et mise à jour de la matrice d'adjacence
		if(!strcmp(debut,"DEBUT_DEF_ARETES")){ //On verifi si il y a bien la ligne "DEBUT_DEF_ARETES"
			while(strcmp(fin,"FIN_DEF_ARETES")) {
                fscanf(fichier, "%d %d", &sommet1, &sommet2);
                if ((sommet1 >= 0 && sommet1 <= g->nb_sommets) &&
                    (sommet2 >= 0 && sommet2 <= g->nb_sommets)) {//verification des valeurs
                    g->matriceAdjacence[sommet1][sommet2] = 1;
                    if (g->orienter == 0) {
                        g->matriceAdjacence[sommet2][sommet1] = 1;
                    }
                }
                fgets(fin, 15, fichier);
			}
		}

		//Mise à jour de la liste d'adjacence
		for(i=0;i<g->nb_sommets;i++){
		    for(j=0;j<g->nb_sommets;j++){
		        if(g->matriceAdjacence[i][j] == 1){
                    inserer(g->listeAdjacences[i], creer_cellule(j));
		        }
		    }
		}
		
		rewind(fichier);//replace le curseur au début du fichier
		fclose(fichier);
	}
	else{
		printf("Impossible d'ouvrir le fichier.");
	}

	return 0;
}

void afficher_graphe(graphe_t *g){
	int i=0, j=0;
	
	printf("Nombres de sommets : %d\n", g->nb_sommets);
	
	if(g->orienter==0){
		printf("Non oriente\n");
	}
	else{
		printf("Oriente\n");
	}

	if(g->valuer==0){
		printf("Non value\n");
	}
	else{
		printf("Value\n");
	}

	printf("Listes d'adjacences :\n\n");
	for(i=0;i<g->nb_sommets;i++){
		printf(" %i --> ", i);
		afficher_liste(g->listeAdjacences[i]);
	}
	printf("\n");

	printf("Matrice d'adjacences :\n\n");
	for(i=0;i<g->nb_sommets;i++){
		for(j=0;j<g->nb_sommets;j++){
			printf(" %d ", g->matriceAdjacence[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int detruire_graphe(graphe_t *g){
	return 0;
}
