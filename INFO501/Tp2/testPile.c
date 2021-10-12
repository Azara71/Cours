#include "pile.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    Pile_t* p=malloc(sizeof(Pile_t));
    empiler(p,1);
    afficherPile(p);
    empiler(p,3);
    empiler(p,5);
    empiler(p,7);
    afficherPile(p);
    depiler(p);
    afficherPile(p);

}