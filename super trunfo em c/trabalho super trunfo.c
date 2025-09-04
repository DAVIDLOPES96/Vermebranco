#include <stdio.h>

int main () {
    char estado [50];
    char cidade[50];
    int  população;
    char código [01];
    float area_km;
    float pib;
    int pontos_turisticos;

    printf ("qual nome do seu estado? :");
    scanf ("%49s \n", &estado);

   printf ("qual nome de sua cidade? :");
   scanf ("%49s \n", &cidade);

   printf ("qual sua população? :");
   scanf ("%d \n", &população);

   printf ("qual seu codigo? :");
   scanf ("%49s \n", &código);

   printf ("qual é sua em km? :");
   scanf ("%f \n", &area_km);

   printf ("quanto vale seu pib? :");
   scanf("%d \n", &pib);

   printf ("quantos ponturiscos tem em sua cidade? :");
   scanf ("%.2f \n", &pontos_turisticos);

   printf ("\n------dados cadastrados--------\n");
   printf ("estados: %s\n", estado);
   printf ("cidade: %s\n", cidade);
   printf ("população: %d\n", população);
   printf ("código: %s\n", código);
   printf ("Área em km: %.2f\n",area_km);]
   printf ("PIB: %.2f\n", pib);
   printf ("pontos_turisticos: %d\n");

   return 0;
}