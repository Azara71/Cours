#include <chaine_aleatoire.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char** chaine_aleatoire(int N){

	char ** matrice=(char **)malloc(N*sizeof(char *));
	int i=0,X=0;
	srand(time(NULL));
	for(i=0;i<N;i++){

	    X = rand()+128%2049; 
	    matrice[i]=(char*)malloc((X+1)*sizeof(char));
	    matrice[i][X]='\0';

	}
	
	return matrice;





}


