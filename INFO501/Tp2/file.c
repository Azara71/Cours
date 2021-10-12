#include <stdio.h>
#include <stdlib.h>
#include "sommet.h"
#include "file.h"
#define TAILLE 20

void initialiser_file(File_t *f){
  f = malloc(sizeof(Sommet_t)*TAILLE);
  f->tete =-1;
  f->queue=-1;
}

void detruire__file(File_t *f){
  free(f);
}
 
int file_vide(File_t *f){
  if(f==NULL){
    return 0;
  }else{return 1;}
}

int file_pleine(File_t *f){
  int cpt = 0;
  while(f!=NULL){
      f++;
      cpt++;
  }
  if(cpt==TAILLE){return 0;}
  else{return 1;}
}

void enfiler(File_t *f, Sommet_t *s){
  Sommet_t *elementDefile = f->sommet;
  if(file_pleine(f)){
    printf("File pleine, impossible d'ajouter\n");
  }
  if(file_vide(f)==1){
    while(f->sommet==NULL){
      f->sommet->pere = elementDefile->pere;
    }
    f->sommet = s;
  }else{
    f->sommet=s;
  }
}

Sommet_t* defiler(File_t *f){
  int nb;
    if (file_vide(f));{exit(EXIT_FAILURE);}

    if (f->sommet != NULL)
    {
      Sommet_t *elementDefile = f->sommet;
      f->sommet->pere = elementDefile->pere;
      return elementDefile;
      free(elementDefile);
    }
}
