#include <stdio.h>

int main() {
    int populacao;
   float area;
   int pontosTuristicos;
   float pib;
   char codigoCarta[10];
   char nomeCidade[10];

   printf("CARTA: \n");
   scanf("%3s", codigoCarta); 

   printf("Nome da sua cidade: \n");
   scanf("%s", nomeCidade);   

   printf("A área da sua cidade: \n");
   scanf("%f", &area);        

   printf("Quantos pontos turísticos tem a sua cidade?: \n");
   scanf("%d", &pontosTuristicos);  

   printf("A população da cidade: \n");
   scanf("%d", &populacao);         
   printf("O PIB da cidade: \n");
   scanf("%f", &pib);         

   printf("\n--- INFORMAÇÕES DA CIDADE ---\n");
   printf("Código da sua carta: %s\n", codigoCarta);
   printf("Nome da sua cidade: %s\n", nomeCidade);
   printf("Área: %f\n", area);  
   printf("Pontos Turísticos: %d\n", pontosTuristicos);
   printf("População: %d\n", populacao);
   printf("PIB: %f\n", pib);

    return 0;
}
