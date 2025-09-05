#include <stdio.h>

int main() {
    char estado[50];  // Aumentei o tamanho para evitar overflow
    char cidade[50];  // Aumentei o tamanho para evitar overflow
    int populacao;   // População deve ser um número inteiro
    char codigo[10];  // Aumentei o tamanho para evitar overflow
    float area_km;   // Área pode ser um número decimal
    float pib;    // PIB pode ser um número decimal
    int pontos_turisticos; // Pontos turísticos deve ser um número inteiro
    // Solicitar e ler os dados do usuário
    printf("Qual nome do seu estado?:"); // saida de dados
    scanf("%49s",estado); // entrada de dados

    printf("Qual nome da sua cidade?:"); // saida de dados
    scanf("%49s",cidade); // entrada de dados

    printf("Qual sua população?:"); // saida de dados
    scanf("%d",&populacao); // entrada de dados

    printf("Qual seu código?:"); // saida de dados
    scanf("%9s",codigo); // entrada de dados

    printf("Qual é a área em km²?:"); // saida de dados
    scanf("%f",&area_km); // entrada de dados

    printf("Quanto vale seu PIB?:"); // saida de dados
    scanf("%f",&pib); // entrada de dados

    printf("Quantos pontos turísticos tem em sua cidade?:"); // saida de dados
    scanf("%d",&pontos_turisticos); // entrada de dados

    printf("\n------ Dados Cadastrados --------\n"); 
    printf("Estado: %s\n",estado); 
    printf("Cidade: %s\n",cidade);
    printf("População: %d\n",populacao);
    printf("Código: %s\n",codigo);
    printf("Área em km²: %.2f\n",area_km);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n",pontos_turisticos);

    return 0;
}