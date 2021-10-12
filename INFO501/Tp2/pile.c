#include"pile.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initialiserPile(Pile_t *p){
    p=malloc(sizeof(Pile_t));
}

int pile_vide(Pile_t *p){
    int toRet = 0;
    if (p->premier == NULL){
        toRet = 1;
    }
    return toRet;
}

int pile_pleine(Pile_t *p){
    int toRet = 0;
    if(pile_vide(p) == 0){
        toRet = 1;
    }

    return toRet;
}

void detruire_pile(Pile_t *p){
    if(p->premier != NULL){
        p->premier = NULL;
    }
    free(p);
}

void empiler(Pile_t *pile, int nvNombre)
{
    Element_t *nouveau = malloc(sizeof(*nouveau));
    if (pile == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = pile->premier;
    pile->premier = nouveau;
}

int depiler(Pile_t *pile)
{
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }

    int nombreDepile = 0;
    Element_t *elementDepile = pile->premier;

    if (pile != NULL && pile->premier != NULL)
    {
        nombreDepile = elementDepile->nombre;
        pile->premier = elementDepile->suivant;
        free(elementDepile);
    }

    return nombreDepile;
}

void afficherPile(Pile_t *pile)
{
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }
    Element_t *actuel = pile->premier;

    while (actuel != NULL)
    {
        printf("%d\n", actuel->nombre);
        actuel = actuel->suivant;
    }

    printf("\n");
}