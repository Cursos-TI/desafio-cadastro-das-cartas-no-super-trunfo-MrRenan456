#include <stdio.h>

int main() {
    int populacao;
    float area;
    int pontosTuristicos;
    float pib;
    float densidadePopulacional; // Corrigido o nome da variável
    float pibPercapita; // Corrigido o nome da variável
    char codigoCarta[4];
    char nomeCidade[50];

    printf("CARTA: \n");
    scanf(" %3s", codigoCarta); 

    printf("Nome da sua cidade: \n");
    scanf(" %50s", nomeCidade); 

    printf("A área da sua cidade (em km²): \n");
    scanf("%f", &area);

    printf("Quantos pontos turísticos tem a sua cidade?: \n");
    scanf("%d", &pontosTuristicos);

    printf("A população da cidade: \n");
    scanf("%d", &populacao);

    printf("O PIB da cidade (em milhões): \n");
    scanf("%f", &pib);

    // Cálculo das novas propriedades
    densidadePopulacional = populacao / area;
    pibPercapita = pib / populacao;

    // Exibição das informações organizadas
    printf("\n===== INFORMAÇÕES DA CIDADE =====\n");
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Área: %.2f km²\n", area);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("População: %f habitantes\n", populacao);
    printf("PIB: %.2f milhões\n", pib);
    printf("---------------------------------\n");
    printf(" Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf(" PIB per Capita: %.2f milhões por habitante\n", pibPercapita);
    printf("=================================\n");

    return 0;
}
