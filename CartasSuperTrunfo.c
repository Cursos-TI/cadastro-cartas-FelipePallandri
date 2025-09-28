#include <stdio.h>
int main() {

// Nomes das variaveis
char estado1[3];
char codigo1[50];
char nome1[50];
int populacao1;
float area1;
float pib1;
int numero1;

//Preenchimento dos Dados
printf("Digite o estado: \n");
scanf("%s", estado1);

printf("Digite o Codigo: \n");
scanf("%s", codigo1);

printf("Digite o Nome da Cidade: \n");
scanf("%s", nome1);

printf("Digite a População: \n");
scanf("%d", &populacao1);

printf("Digite a Área: \n");
scanf("%f", &area1);

printf("Digite o PIB: \n");
scanf("%f", &pib1);

printf("Digite o Numero de Pontos Turisticos: \n");
scanf("%d", &numero1);

float densidade1 = (float) populacao1 / area1; // Para calcular media densidade populacinal
float percapita1 = (float) pib1 / populacao1; // para calcular media pib per capita

printf("\n-------------------------\n\n");

//Imprimir os dados preenchidos
printf("CARTA 01\n");

printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nome1);
printf("População: %d mil habitantes\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", numero1);
printf("Densidade Populacional: %.2f\n", densidade1);
printf("Pib per capita: %.2f\n", percapita1);

printf("\n---------------------------------\n\n");

            
            // Nomes das Variaveis
            char estado2[3];
            char codigo2[50];
            char nome2[50];
            int populacao2;
            float area2;
            float pib2;
            int numero2;

            //Preenchimento dos Dados
            printf("Digite o estado: \n");
            scanf("%s", estado2);

            printf("Digite o Codigo: \n");
            scanf("%s", codigo2);

            printf("Digite o Nome da Cidade: \n");
            scanf("%s", nome2);

            printf("Digite a População: \n");
            scanf("%d", &populacao2);

            printf("Digite a Área: \n");
            scanf("%f", &area2);

            printf("Digite o PIB: \n");
            scanf("%f", &pib2);

            printf("Digite o Numero de Pontos Turisticos: \n");
            scanf("%d", &numero2);

            float densidade2 = (float) populacao2 / area2; // Para calcular media densidade populacinal
            float percapita2 = (float) pib2 / populacao2; // para calcular media pib per capita

            printf("\n-------------------------\n\n");

            //Imprimir os dados preenchidos
            printf("CARTA 02\n");
            printf("Estado: %s\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Nome da Cidade: %s\n", nome2);
            printf("População: %d mil habitantes\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", pib2);
            printf("Numero de Pontos Turisticos: %d\n", numero2);
            printf("Densidade Populacional: %.2f\n", densidade2);
            printf("Pib per capita: %.2f\n", percapita2);

            printf("\n-------------------------\n\n");

return 0;

}