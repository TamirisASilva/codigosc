#include <stdio.h>
#include <stdlib.h>

int main()
{   int suspeitos, confirmados, mortes, total;
    printf("Tamiris A Silva\n");
    printf("Estudante de analise e devolvimento de sistemas\n");
    printf("Faculdade Estacio\n");

    printf("Preencha os seguintes dados sobre a dengue no Rio de Janeiro:\n");
    printf("\tCasos suspeitos: ");
    scanf("%d",&suspeitos);
    printf("\tCasos confirmados: ");
    scanf("%d",&confirmados);
    printf("\tMortes confirmadas: ");
    scanf("%d",&mortes);


    printf("Informacoes sobre a dengue no Rio de Janeiro:\n");
    printf("\tCasos suspeitos: %d\n",suspeitos);
    printf("\tCasos confirmados: %d\n",confirmados);
    printf("\tMortes: %d\n",mortes);
    total=suspeitos+confirmados+mortes;
    printf("\tTotal de dados: %d",total);
    getch();

    return 0;
}
