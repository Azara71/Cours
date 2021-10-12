#ifndef pile_h
#define pile_h

typedef struct Element_t
{
    int nombre;
    struct Element_t *suivant;
}Element_t;

typedef struct Pile_t
{
    Element_t *premier;
}Pile_t;

void initialiserPile(Pile_t *p);

int pile_vide(Pile_t *p);

int pile_pleine(Pile_t *p);

void detruire_pile(Pile_t *p);

void empiler(Pile_t *pile, int nvNombre);

int depiler(Pile_t *pile);

void afficherPile(Pile_t *pile);

#endif