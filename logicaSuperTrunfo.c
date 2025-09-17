#include <stdio.h>

int main() {
    // Primeira Carta
    char letra_carta1;
    char codigo_carta1[3], cidade_carta1[50];
    int populacao_carta1, turismo_carta1;
    float areaKm_carta1, pib_carta1;
    float densidadePopulacional1;
    float PibperCapita1;

    printf("Digite a primeira letra de um estado brasileiro, Porém apenas da letra A ao H: \n");
    scanf(" %c", &letra_carta1);

    printf("Digite o número de 01 ao 04, que será adicionado à primeira letra do estado: \n");
    scanf("%s", codigo_carta1);

    getchar();  // Limpa o Enter
    printf("Digite o nome da capital deste estado: \n");
    scanf(" %[^\n]", cidade_carta1);

    printf("Digite qual a população desta cidade: \n");
    scanf("%d", &populacao_carta1);

    printf("Digite qual é a área em Km² estimada do estado: \n");
    scanf("%f", &areaKm_carta1);

    printf("Digite qual o PIB do estado: \n");
    scanf("%f", &pib_carta1);

    printf("Digite quantos pontos turísticos tem: \n");
    scanf("%d", &turismo_carta1);

    densidadePopulacional1 =(populacao_carta1 / areaKm_carta1);
    PibperCapita1 = (pib_carta1 / populacao_carta1);



    // Segunda Carta
    char letra_carta2;
    char codigo_carta2[3], cidade_carta2[50];
    int populacao_carta2, turismo_carta2;
    float areaKm_carta2, pib_carta2;
    float densidadePopulacional2;
    float PibperCapita2;

    printf("Agora adicione nova carta\n");

    getchar(); // limpa o Enter anterior
    printf("Digite a primeira letra de um estado brasileiro, Porém apenas da letra A ao H: \n");
    scanf(" %c", &letra_carta2);

    printf("Digite o número de 01 ao 04, que será adicionado à primeira letra do estado: \n");
    scanf("%s", codigo_carta2);

    getchar(); // limpa o Enter antes de ler cidade com espaços
    printf("Digite o nome da capital deste estado: \n");
    scanf(" %[^\n]", cidade_carta2);

    printf("Digite qual a população desta cidade: \n");
    scanf("%d", &populacao_carta2);

    printf("Digite qual é a área em Km² estimada do estado: \n");
    scanf("%f", &areaKm_carta2);

    printf("Digite qual o PIB do estado: \n");
    scanf("%f", &pib_carta2);

    printf("Digite quantos pontos turísticos tem: \n");
    scanf("%d", &turismo_carta2);

        densidadePopulacional2 =(populacao_carta2 / areaKm_carta2);
        PibperCapita2 = (pib_carta2 / populacao_carta2);

    // Mostra informações da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("\nEstado: %c\n", letra_carta1);
    printf("Código: %c%s\n", letra_carta1, codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f Km²\n", areaKm_carta1);
    printf("PIB: %.2f\n", pib_carta1);
    printf("Número de pontos turísticos: %d\n", turismo_carta1);
    printf("Densidade Populacional: %.2f Km²\n",densidadePopulacional1);
    printf("Pib per Capita:%.2f Reais\n",pib_carta1);

    // Mostra informações da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("\nEstado: %c\n", letra_carta2);
    printf("Código: %c%s\n", letra_carta2, codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f Km²\n", areaKm_carta2);
    printf("PIB: %.2f\n", pib_carta2);
    printf("Número de pontos turísticos: %d\n", turismo_carta2);
    printf("Densidade Populacional: %.2f Km²\n",densidadePopulacional2);
    printf("Pib per Capita:%.2f Reais\n",pib_carta2);


    //Super Poder
    unsigned superpoder1 = populacao_carta1 + areaKm_carta1 + pib_carta1 + turismo_carta1  ;
    unsigned superpoder2 = populacao_carta2 + areaKm_carta2 + pib_carta2 + turismo_carta2  ;


    //Comparação de Cartas

    printf("\n--- Comparação de Cartas ---\n");

    if (populacao_carta1> populacao_carta2)
    {
        printf("A carta 1 venceu com maior população!\n");
    }else{
        printf("A carta 2 venceu com maior população!\n");
    }
    
    if (areaKm_carta1> areaKm_carta2)
    {
        printf("A carta 1 tem maior Àrea K²!\n");
    }else{
        printf("A carta 2 tem maior Àrea K²!\n");
    }

    if (pib_carta1> pib_carta2)
    {
        printf("A carta 1 tem o maior PIB!\n");
    }else{
        printf("A carta 2 tem o maior PIB!\n");
    }

    if (turismo_carta1>turismo_carta2)
    {
        printf("A carta 1 tem mais pontos turísticos!\n");
    }else{
        printf("A carta 2 tem mais pontos turísticos!\n");
    }

    if(densidadePopulacional1> densidadePopulacional2){
        printf("A carta 1 tem maior desidade populacional!\n");
    }else{
        printf("A carta 2 tem maior desidade populacional!\n");
    }

    if (PibperCapita1> PibperCapita2)
    {
        printf("A carta 1 tem maior PIB per Capita!\n");
    }else{
        printf("A carta 2 tem maior PIB per Capita!\n");
    }

    if (superpoder1>superpoder2)
    {
        printf("A Carta 1 tem maior Super Poder !\n");
    }else{
        printf("A carta 2 tem maior Super Poder !\n");
    }
    
    
    return 0;
}
