#include <stdio.h>
void main ()
{
    int A ,B,C;
    float D;
    printf("quels est l'operation souhaitée?\n 1 -> addition \n 2 -> soustraction \n 3 -> multiplication \n 4 -> division\n");
    scanf("%d",&C);
    if (C==1) 
    {
    printf("quels est le nbr A ?\n");
    scanf("%d",&A);
    printf("quels est le nbr B ?\n");
    scanf("%d",&B);
    D=A+B;
    printf("la somme des deux nombres est:\n%.2f",C);
    return 0;
    }
    else if (C==2) 
    {
    printf("quels est le nbr A ?\n");
    scanf("%d",&A);
    printf("quels est le nbr B ?\n");
    scanf("%d",&B);
    D=A-B;
    printf("la difference des deux nombres est:\n%.2f",D);
    }
   else if (C==3) 
   {
    printf("quels est le nbr A ?\n");
    scanf("%d",&A);
    printf("quels est le nbr B ?\n");
    scanf("%d",&B);
    D=A*B;
    printf("le produit des deux nombres est:\n%.2f",D);
   }
   else if (C==4)
   {
    printf("quels est le nbr A ?\n");
    scanf("%d",&A);
    printf("quels est le nbr B ?\n");
    scanf("%d",&B);
    D=(float)A/B;
    printf("la division des deux nombres est:\n%.2f",D);
   }
   else printf("erreur");
   return 0;
}
