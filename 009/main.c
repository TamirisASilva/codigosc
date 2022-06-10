#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
   int base, altura, area, perimetro;

   printf("Tamiris A Silva\n");
   printf("Estudante de analise e devolvimento de sistemas\n");
   printf("Faculdade Estacio\n\n");

   printf("Digite a base do retangulo em cm: ");
   scanf("%d",&base);
   printf("Digite a altura do retangulo em cm: ");
   scanf("%d",&altura);

   area=base*altura;
   perimetro=(base*2)+(altura*2);

   printf("A area do quadrado e: %d",area);
   printf("\nO perimetro do quadrado e: %d",perimetro);


    return 0;
}
