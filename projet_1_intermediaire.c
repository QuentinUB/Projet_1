#include <stdio.h>
int main ()
{
	int A,B,C = 1;
	float D;
	while (C!=0)
	{
		printf("\nquelle est l'operation souhaitC)e?\n 0 -> quitter la calculatrice \n 1 -> addition \n 2 -> soustraction \n 3 -> multiplication \n 4 -> division\n");
		scanf("%d",&C);
		switch (C)
		{
		case 1:
			printf("quel est le nbr A ?\n");
			scanf("%d",&A);
			printf("quel est le nbr B ?\n");
			scanf("%d",&B);
			D=A+B;
			printf("la somme des deux nombres est:\n%.2f",D);
			break;
		case 2:
			printf("quel est le nbr A ?\n");
			scanf("%d",&A);
			printf("quel est le nbr B ?\n");
			scanf("%d",&B);
			D=A-B;
			printf("la difference des deux nombres est:\n%.2f",D);
			break;
		case 3:
			printf("quels est le nbr A ?\n");
			scanf("%d",&A);
			printf("quels est le nbr B ?\n");
			scanf("%d",&B);
			D=A*B;
			printf("le produit des deux nombres est:\n%.2f",D);
			break;
		case 4:
			printf("quels est le nbr A ?\n");
			scanf("%d",&A);
			printf("quels est le nbr B ?\n");
			scanf("%d",&B);
			D=(float)A/B;
			printf("la division des deux nombres est:\n%.2f",D);
			break;
		case 0:
			break;
		default:
			printf("Erreur : choix invalide.\n");
			break;
		}
	}
	return 0;
}
