#ifndef FILE_H
#define FILE_H
#include "sommet.h"



typedef struct File_t{
  Sommet_t *sommet;
  int *tete;
  int *queue;
}File_t;

void initialiser_file(File_t *); 
void detruire_file(File_t*); 
int file_vide(File_t*); 
int file_pleine(File_t*); 
void enfiler(File_t*, Sommet_t*); 
Sommet_t* defiler(File_t*); 


#endif //FILE_H
