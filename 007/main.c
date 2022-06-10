#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{  int num;

   printf("Tamiris A Silva\n");
   printf("Estudante de analise e devolvimento de sistemas\n");
   printf("Faculdade Estacio\n\n");

   printf("Convertendo numero da base decimal para octal e hexadecimal\n");
   printf("\nEscreva um numero na base decimal: ");
   scanf("%d",&num);

   printf("\nO numero %d na base octal e: %o",num,num);
   printf("\nO numero %d na base hexadecimal e: %X",num,num); //para hexadecimal pode se usar x ou X


    return 0;
}
