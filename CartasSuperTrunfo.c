#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    //novato 
    //propriedades da Carta 1
    
    char estadoCARTA1[3];
    char codigoCartaCARTA1[10];
    char nomeCidadeCARTA1[50];
    int populacaoCARTA1;
    float areaEmKmCARTA1;
    float pibCARTA1;
    int qtdPontosTuristicosCARTA1;

    //nivel aventureiro

    float densidadePopulacionalCARTA1;
    float pibPerCaptaCARTA1;

    // propriredades da carta 2

    char estadoCARTA2[2];
    char codigoCartaCARTA2[10];
    char nomeCidadeCARTA2[50];
    int populacaoCARTA2;
    float areaEmKmCARTA2;
    float pibCARTA2;
    int qtdPontosTuristicosCARTA2;

    //nivel aventureiro

    float densidadePopulacionalCARTA2;
    float pibPerCaptaCARTA2;


    
// Pegando as infomações do usuario:

    printf("Olá, seja bem vindo ao jogo SUPER TRUNFO ^w^\n");
    printf("Preencha 2 cartas.\nPara comecar, por favor, insira as informações da Carta 1 :D\n");

    printf("CARTA 1\n\n");

    printf("Insira a Sigla do Estado:\n");
    scanf("%2[^\n]", estadoCARTA1);
    getchar();

    printf("Insira o Codigo da Carta\n");
    scanf("%9[^\n]", codigoCartaCARTA1);
    getchar();

    printf("Insira o nome da cidade\n");
    scanf("%49[^\n]", nomeCidadeCARTA1);
    getchar();

    printf("Insira a quantidade de Pessoas da Cidade (Populacao)\n");
    scanf("%d", &populacaoCARTA1);
    printf("Insira a Area em km² (somente numeros ex: 244.45)\n");
    scanf("%f", &areaEmKmCARTA1);
    printf("Insira o PIB (Ex: 233335.442)\n");
    scanf("%f", &pibCARTA1);
    printf("insira a quantidade de pontos turisticos\n");
    scanf("%d", &qtdPontosTuristicosCARTA1);
    getchar();

    printf("\n\nBeleza! Agora informe as propriedades da CARTA 2 como as da CARTA 1\n");

    printf("CARTA 2\n\n");

    printf("Insira a Sigla do Estado:\n");
    scanf("%2[^\n]", estadoCARTA2);
    getchar();

    printf("Insira o Codigo da Carta\n");
    scanf("%9[^\n]", codigoCartaCARTA2);
    getchar();

    printf("Insira o nome da cidade\n");
    scanf("%49[^\n]", nomeCidadeCARTA2);
    getchar();
    
    printf("Insira a quantidade de Pessoas da Cidade (Populacao)\n");
    scanf("%d", &populacaoCARTA2);
    printf("Insira a Area em km² (somente numeros ex: 244.45)\n");
    scanf("%f", &areaEmKmCARTA2);
    printf("Insira o PIB (Ex: 233335.442)\n");
    scanf("%f", &pibCARTA2);
    printf("insira a quantidade de pontos turisticos\n");
    scanf("%d", &qtdPontosTuristicosCARTA2);

    //calculo nivel aventureiro

    densidadePopulacionalCARTA1 = (float) populacaoCARTA1 / areaEmKmCARTA1 ; 
    densidadePopulacionalCARTA2 = (float) populacaoCARTA2 / areaEmKmCARTA2 ; 

    pibPerCaptaCARTA1 = (float) pibCARTA1 / populacaoCARTA1 ;
    pibPerCaptaCARTA2 = (float) pibCARTA2 / populacaoCARTA2 ; 


    // Imprimindo na tela as informações das cartas;

    printf("\nCarta 1:\n\n");
    printf("Estado: %s\n", estadoCARTA1);
    printf("Código: %s\n", codigoCartaCARTA1);
    printf("Nome da Cidade: %s\n", nomeCidadeCARTA1);
    printf("População: %d\n", populacaoCARTA1);
    printf("Área: %.2f km²\n", areaEmKmCARTA1);
    printf("PIB: %.2f bilhões de reais\n", pibCARTA1);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosCARTA1);
    
    //nivel aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCARTA1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCaptaCARTA1);


    printf("Carta 2:\n\n");
    printf("Estado: %s\n", estadoCARTA2);
    printf("Código: %s\n", codigoCartaCARTA2);
    printf("Nome da Cidade: %s\n", nomeCidadeCARTA2);
    printf("População: %d\n", populacaoCARTA2);
    printf("Área: %.2f km²\n", areaEmKmCARTA2);
    printf("PIB: %.2f bilhões de reais\n", pibCARTA2);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosCARTA2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCARTA2);
   
    //nivel aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCARTA2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCaptaCARTA2);






    return 0;
}
