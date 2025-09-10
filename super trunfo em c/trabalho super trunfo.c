#include <stdio.h>

int main() {
    
    //ciadade 1
    char estado1[50], cidade1[50],codigo1[10];  // Aumentei o tamanho para evitar overflow
    int populacao1;   // População deve ser um número inteiro
    float area_km²1;   // Área pode ser um número decimal
    float pib1;    // PIB pode ser um número decimal
    int pontos_turisticos1; // Pontos turísticos deve ser um número inteiro
    //cidade 2
    char estado2[50], cidade2[50],codigo2[10]; // Aumentei o tamanho para evitar overflow
    int populacao2;  // População deve ser um número inteiro
    float area_km2;  // Área pode ser um número decimal
    float pib2;  // PIB pode ser um número decimal
    int pontos_turisticos2; // Pontos turísticos deve ser um número inteiro
    //cadastro cidade 1

    printf("----- Cadastro da primeira cidade -----\n");
     
    printf("Qual nome da seu estado?:"); // saida de dados
    scanf("%49s",estado1); // entrada de dados

    
    printf("qual sua cidade?:"); // saida de dados
    scanf("%49s",cidade1); // entrada de dados

    printf("Qual sua população?:"); // saida de dados
    scanf("%d",&populacao1); // entrada de dados

    printf("Qual seu código?:"); // saida de dados
    scanf("%9s",codigo1); // entrada de dados

    printf("Qual é a área em km²?:"); // saida de dados
    scanf("%f",&area_km²1); // entrada de dados
    
    printf("Quanto vale seu PIB?:"); // saida de dados
    scanf("%f",&pib1); // entrada de dados
   
    printf("Quantos pontos turísticos tem em sua cidade?:"); // saida de dados
    scanf("%d",&pontos_turisticos1); // entrada de dados
    
   //cadastro cidade 2

    printf("----- Cadastro da segunda cidade -----\n");
    
    printf("estado:"); // saida de dados
    scanf("%49s",estado2); // entrada de dados

    printf("cidade:"); // saida de dados
    scanf("%49s",cidade2); // entrada de dados

    printf("populacção:"); // saida de dados
    scanf("%d",&populacao2); // entrada de dados

    printf("código:"); // saida de dados
    scanf("%9s",codigo2); // entrada de dados

    printf(" Area km²:"); // saida de dados
    scanf("%f",&area_km2); // entrada de dados

    printf("PIB:"); // saida de dados
    scanf("%f",&pib2); // entrada de dados

    printf("pontos turísticos:"); // saida de dados
    scanf("%d",&pontos_turisticos2); // entrada de dados

    //comparação
    char *estado, *cidade, *codigo;
    int populacao, pontos_turisticos;
    float area_km, pib;
    if (populacao1 > populacao2) {
        estado = estado1;
        cidade = cidade1;
        populacao = populacao1;
        codigo = codigo1;
        area_km = area_km²1;
        pib = pib1;
        pontos_turisticos = pontos_turisticos1;
    } else {
        estado = estado2;
        cidade = cidade2;
        populacao = populacao2;
        codigo = codigo2;
        area_km = area_km2;
        pib = pib2;
        pontos_turisticos = pontos_turisticos2;
    }

    printf("\n------ Dados Cadastrados --------\n"); 
    printf("Estado: %s\n",estado); 
    printf("Estado: %s\n",estado1); 
    printf("Cidade: %s\n",cidade1);
    printf("População: %d\n",populacao1);
    printf("Código: %s\n",codigo1);
    printf("Área em km²: %.2f\n",area_km²1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n",pontos_turisticos1);

    // Exibir dados da segunda cidade

    printf("\n------ Dados Cadastrados --------\n");
    printf("Estado: %s\n",estado2);
    printf("Cidade: %s\n",cidade2);
    printf("População: %d\n",populacao2);
    printf("Código: %s\n",codigo2);
    printf("Área em km²: %.2f\n",area_km2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n",pontos_turisticos2);

    printf("\n------ Cidade com maior população --------\n");
    printf("Estado: %s\n",estado);
    printf("Cidade: %s\n",cidade);
    printf("População: %d\n",populacao);
    printf("Código: %s\n",codigo);
    printf("Área em km²: %.2f\n",area_km);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n",pontos_turisticos);



    return 0;


}