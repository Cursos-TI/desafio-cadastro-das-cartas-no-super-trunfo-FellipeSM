#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Carta 1
    char estado1[50] = "a";
    char codigocard1[10] = "a";
    char Cidade1[50] = "a";
    int populacao1 = 0;
    int Pontoturistico1 = 0;
    float areakm1 = 0;
    float PIB1 = 0;

    //carta 2
    char estado2[50] = "a";
    char codigocard2[10] = "a";
    char Cidade2[50] = "a";
    int populacao2 = 0;
    int Pontoturistico2 = 0;
    float areakm2 = 0;
    float PIB2 = 0;
    


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //carta 1:
    printf("Carta 1");
    printf("Digite o Estado 1: ");
    scanf("%s", &estado1);

    printf("Digite o Codigo do Estado 1: ");
    scanf("%s", &codigocard1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &Cidade1);

    printf("Digite a quantidade populacional da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área em km: ");
    scanf("%f", &areakm1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &Pontoturistico1);

    //Calculos carta 1
    float DensidadePopulacional1 = populacao1 / areakm1;
    float PIBperCapita1 = (PIB1*10000000) / populacao1;
    float DensidadePopInversa1 = (1/DensidadePopulacional1);
    float Superpoder1 = (float) populacao1 + areakm1 + PIB1 + Pontoturistico1 + PIBperCapita1 + DensidadePopInversa1;


    //carta 2:
    printf("Carta 2");
    printf("Digite o Estado : ");
    scanf("%s", &estado2);

    printf("Digite o Codigo do Estado: ");
    scanf("%s", &codigocard2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &Cidade2);

    printf("Digite a quantidade populacional da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Área em km: ");
    scanf("%f", &areakm2);

    printf("Digite o PIB da cidade em Milhões: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &Pontoturistico2);

    //Calculos carta 2
    float DensidadePopulacional2 = populacao2 / areakm2;
    float PIBperCapita2 = (PIB2*10000000) / populacao2;
    float DensidadePopInversa2 = (1/DensidadePopulacional2);
    float Superpoder2 = (float) DensidadePopInversa2 + populacao2 + areakm2 + PIB2 + Pontoturistico2 + PIBperCapita2;



    
    

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //carta 1:
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigocard1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", areakm1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", Pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", PIBperCapita1);
    
    //carta 2:
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigocard2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n\n", PIBperCapita2);

    
    //Comparativos
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", areakm1 > areakm2);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: %d\n", Pontoturistico1 > Pontoturistico2);
    printf("Densidade Populacional: %d\n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("PIB per Capita: %d\n", PIBperCapita1 > PIBperCapita2);
    printf("Super Poder: %d\n", Superpoder1 > Superpoder2);




    return 0;
}
