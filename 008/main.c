#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int area, lado, perimetro;

   printf("Tamiris A Silva\n");
   printf("Estudante de analise e devolvimento de sistemas\n");
   printf("Faculdade Estacio\n\n");

   printf("Digite o lado do quadrado em cm: ");
   scanf("%d",&lado);

   area=lado*lado;
   perimetro=lado*4;

   printf("\nA area do quadrado e: %d",area);
   printf("\nO perimetro do quadrado e: %d",perimetro);
    return 0;
}
