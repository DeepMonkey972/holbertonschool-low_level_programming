## Measurement Methodology

J'ai mesuré la CONSTRUCTION de DATA, le PROCESS et la REDUCTION tout ca dans un TOTAL en initialisant les valeurs de debut et de fin a l'aide de la bibliothèque <time.h>
Dans cette bibliothèque, j'utilise clockl() pour initialiser un compteur et le terminer (start - end).
J'utilise printf avec le format %.6f pour plus de precisions ainsi que "end" et "start' / CLOCK_PER_SEC pour afficher le resultat en secondes.

## Observed Performance Differences

Voici les résultats observés lors de l'execution du programme instrumentation_lab.c ainsi qu'une petite description de chaque étape :

TOTAL seconds : 0.000469
C'est le total de de toute les autres mesures (le temps écoulé entre le début de la premiere phase et la fin de la dernère) donc c'est forcement le plus long.
BUILD_DATA seconds : 0.000243
C'est le temps que build_dataset met a remplir un tableau de 50 000 entiers avec un générateur aléatoire.
PROCESS seconds : 0.000130
C'est le temps que process_data met a transformer chaque nombre (Si le résultat est négatif, on garde sa valeur absolue).
REDUCE seconds : 0.000092
C'est le temps que reduce_checksum met a réduire tout le tableau en une seul valeur (le checksum).
C'est ce qui est le plus rapide.

## Relation Between Runtime and Energy Consumption


Le "Runtime" est le temps durant laquelle le programme fait travailler le processeur.
La "Puissance" est l'énergie consommée par secondes, qui dépend de ce que fait le processeur.
"L'Energie" est ce qui est réelement consommé.

Donc à puissance égale un programme deux fois plus rapide consomme deux fois moins d'énergie (Energie = Puissance x Temps).

## Limitations of the Experiment

Les limites de cette experiences sont :

-Il n'y a eu que 3 executions du programme ce qui ne permet pas d'avoir une fiabilité sur les résultats obtenus, il faudrait beaucoup plus d'executions pour une plus grande précision des résultats.
-La première execution est souvent plus lente et peux fausser nos resultats si on les garde dans la moyenne.
-Clock() mesure le temps processeur mais pas le temps réel, il y a trop de variable a prendre en compte comme si le programme est mis en pause par exemple ce qui fausse les résultats.
-Les résultats sont faits une une seul machine et un seul compilateur ce qui ne permet pas de généraliser les résultats.


## Practical Engineering Takeaway

Pour résumé, il faut se concentrer sur l'optimisation du programme pour en réduire sa consommation d'énergie (Energie = puissance x temps).
Un algorithme linéaire est selon moi le plus adapté car pour des volumes de données plus importantes, le temps restera proportionnnel à la quantité de ces données. 

