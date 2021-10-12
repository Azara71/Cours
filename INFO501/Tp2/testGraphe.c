#include"graphe.h"

int main(){
	char nomFichier[12] = "graphe2.txt";
	graphe_t g1;
	initialiser_graphe(&g1, nomFichier);

	printf("Nombres de sommets : %d\n", g1.nb_sommets);
    printf("orienter : %d\n", g1.orienter);
	printf("valuer : %d\n\n", g1.valuer);

	printf("  avec la fonction afficher :\n");
	afficher_graphe(&g1);
	
	return 0;
}

//path:
//D:\Logiciel\mingw32\bin\mingw32-make.exe

