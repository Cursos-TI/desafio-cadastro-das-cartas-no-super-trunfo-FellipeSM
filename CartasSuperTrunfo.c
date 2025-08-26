#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[50] = "a";
    char codigocard1[10] = "0";
    char Cidade1[50] = "a";
    int populacao1 = 0;
    int Pontoturistico1 = 0;
    float areakm1 = 0;
    float PIB1 = 0;

    char estado2[50] = "a";
    char codigocard2[10] = "0";
    char Cidade2[50] = "a";
    int populacao2 = 0;
    int Pontoturistico2 = 0;
    float areakm2 = 0;
    float PIB2 = 0;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //carta 1:
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

    printf("Digite o PIB da cidade em Milhões: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &Pontoturistico1);
    
    //carta 2:
    printf("Digite o Estado: ");
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


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigocard1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", areakm1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d \n\n", Pontoturistico1);

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigocard2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", areakm2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d", Pontoturistico2);

    
    return 0;
}
