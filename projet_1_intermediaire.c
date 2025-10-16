#include <stdio.h>
int main ()
{
	int A,B,C;
	float D;
	printf("quels est l'operation souhaitC)e?\n 1 -> addition \n 2 -> soustraction \n 3 -> multiplication \n 4 -> division\n");
	scanf("%d",&C);
	switch (C)
	{
	    case 1:
		printf("quels est le nbr A ?\n");
		scanf("%d",&A);
		printf("quels est le nbr B ?\n");
		scanf("%d",&B);
		D=A+B;
		printf("la somme des deux nombres est:\n%.2f",D);
		break;
	    case 2:
		printf("quels est le nbr A ?\n");
		scanf("%d",&A);
		printf("quels est le nbr B ?\n");
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
        default:
        printf("erreur");
	    break;
    }
return 0;
}
