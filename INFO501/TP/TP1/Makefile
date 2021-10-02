CC = gcc 
OBJETS = main.o liste.o cellule.o

main : $(OBJETS)
	$(CC) -o main $(OBJETS)
main.o : main.c liste.h
	$(CC) -c main.c
liste.o : liste.c liste.h cellule.h
	$(CC) -c liste.c
cellule.o : cellule.c cellule.h
	$(CC) -c cellule.c
clean:
	rm main $(OBJETS)
