Compiler : make
Executer : ./testGraphe

Au cas où:
(Je travaille sur Clion sur Windows10)

Voici les commades executer par le makeflie lors du run'Makefile':
gcc -Wall -O3 -c prog_liste.c
gcc -Wall -O3 -c liste.c
gcc -Wall -O3 -c cellule.c
gcc -Wall -O3 -o prog_liste prog_liste.o liste.o cellule.o
gcc -Wall -O3 -c testGraphe.c
gcc -Wall -O3 -c graphe.c
gcc -Wall -O3 -o testGraphe testGraphe.o graphe.o liste.o cellule.o

Pour executer sur le terminale interne :
testGraphe.exe
