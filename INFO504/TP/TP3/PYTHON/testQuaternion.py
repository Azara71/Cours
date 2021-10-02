from numpy import array,float32

# Permet d'avoir accès a la classe Quaternion du fichier quaternion.py
from quaternion import Quaternion

# Déclaration d'une liste
elements = [1,2,3]

# nombre d'itérations (vous pouvez le modifier pour aller plus vite)
nbIterations = 1000000

# nombre de pas qui servira pour l'affichage des '.'
step = int(nbIterations/100)

# Permet de faire nbIterations iterations ;-)
for i in range(nbIterations):

    # si on a fait 'step' iterations (et aussi dès le depart)
    if i%step==0:
        # on affiche 'tout de suite' (flush=True) un '.' sans aller à la ligne (end='')
        print('.',end='',flush=True)

    # Création d'un quaternion <=> appel au constructeur
    quat1=Quaternion(elements)

    # Création d'un autre quaternion <=> appel au constructeur
    quat2=Quaternion(elements)

    # Récupération de la somme de 2 quaternions.
    quat3=quat1+quat2

# un dernier message et un retour à la ligne (pas de 'end' modifié)
print("That's all folks !!!")