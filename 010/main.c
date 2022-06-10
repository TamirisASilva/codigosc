#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{   int num1, num2;

   printf("Tamiris A Silva\n");
   printf("Estudante de analise e devolvimento de sistemas\n");
   printf("Faculdade Estacio\n\n");

   printf("\tVoce deve digitar dois numeros inteiros diferentes de zero");
   printf("\nDigite o primeiro numero: ");
   scanf("%d",&num1);
   printf("Digite o segundo numero: ");
   scanf("%d",&num2);

   printf("Soma: %d + %d = %d\n",num1,num2,num1+num2);
   printf("Subtracao: %d - %d = %d\n", num1,num2, num1-num2);
   printf("Produto: %d X %d = %d\n",num1,num2,num1*num2);
   printf("Divisao: %d / %d = %d\n", num1,num2, num1/num2);
   printf("Media entre %d e %d = %.2f\n",num1,num2,(float)(num1+num2)/2);
    return 0;
}
