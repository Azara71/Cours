#include <stdio.h>
#include <stdlib.h>
#include "file.h"
#include "graphe.h"
#include "pile.h"
#include "sommet.h"
#include "COULEUR.h"

void parcour_largeur(graphe_t *g,Sommet_t *s){
    for(int i=0;i<g->nb_sommets;i++){
        s->c=BLANC;
        s->pere=NULL;
        s++;
    }
    File_t* f;
    initialiser_file(f);
    enfiler(f,s);
    while(file_vide(f)!=0){
        Sommet_t *u =defiler(f);
        Sommet_t *v = g->listeAdjacences[u->id]->tete;
        while(v!=NULL){
            
        }

        }
    }


}
