#include <stdio.h>

int main(void)
{
	int choix = 0;
	float nombre1 = 0, nombre2 = 0;

	printf("Bonjour et bienvenue sur ce programme permettant de faire plusieurs operations.\nAppuyez sur les differente touches pour choisir votre operations !\n\n1: Addition\n2: Soustraction\n3: Multiplication\n4: Division\n0: Quitter le programme \n\nC'est a vous !\n");
	scanf("%d", &choix);
	if (choix == 0)
	{
		printf("A bientôt !!\n");
		return (0);
	}
	else if (choix > 4)
	{
		printf("Invalid choice\n");
	}
	else if (choix == 1)
	{
		printf("Entrez le premier nombre de votre calcul :\n");
		scanf("%f", &nombre1);
		printf("Entrez le deuxième nombre de votre calcul :\n");
		scanf("%f", &nombre2);
		printf("Le résultat est : %.2f\n", nombre1 + nombre2);
	}
	else if (choix == 2)
	{
		printf("Entrez le premier nombre de votre calcul :\n");
		scanf("%f", &nombre1);
		printf("Entrez le deuxième nombre de votre calcul :\n");
		scanf("%f", &nombre2);
		printf("Le résultat est : %.2f\n", nombre1 - nombre2);
	}
	else if (choix == 3)
	{
		printf("Entrez le premier nombre de votre calcul :\n");
		scanf("%f", &nombre1);
		printf("Entrez le deuxième nombre de votre calcul :\n");
		scanf("%f", &nombre2);
		printf("Le résultat est : %.2f\n", nombre1 * nombre2);
	}
	else if (choix == 4)
	{
		
		printf("Entrez le premier nombre de votre calcul :\n");
		scanf("%f", &nombre1);
		printf("Entrez le deuxième nombre de votre calcul :\n");
		
		scanf("%f", &nombre2);
		if (nombre1 == 0 || nombre2 == 0)
		{
			printf("Error : division by zero\n");
		}
		printf("Le résultat est : %.2f\n", nombre1 / nombre2);
		
	}
	return (0);
}
