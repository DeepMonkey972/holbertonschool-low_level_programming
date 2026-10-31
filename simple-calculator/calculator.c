#include <stdio.h>

int main(void)
{
	int choix = 0;

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
	return (0);
}
