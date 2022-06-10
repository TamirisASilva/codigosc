#include <stdio.h>
#include <stdlib.h>

int main()
{   int a, b, c;
    printf("Tamiris A Silva\n");
    printf("Estudante de analise e devolvimento de sistemas\n");
    printf("Faculdade Estacio\n\n");

    printf("\tVerificando Estoque da Loja");
    printf("\nDigite a quantidade de chuteiras da marca A: ");
    scanf("%d",&a);
    printf("Digite a quantidade de chuteiras da marca B: ");
    scanf("%d",&b);
    printf("Digite a quantidade de chuteiras da marca C: ");
    scanf("%d",&c);

    printf("\nExistem %d chuteiras da marca A",a);
    printf("\nExistem %d chuteiras da marca B",b);
    printf("\nExistem %d chuteiras da marca C",c);

    printf("\nExistem 10 chuteiras da marca A, 20 da marca B, 30 da marca C\n\n\n");
    printf("\t    Quantidades de chuteiras em Estoque\n");
    printf("\t Marca A   \t   Marca B   \t   Marca C\n");
    printf("\t   %d       \t     %d      \t     %d",a,b,c);

    return 0;
}
