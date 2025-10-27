#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    // Configura o terminal para aceitar acentuação
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // ================= CARTA 1 =================
    char estado1;
    char codigo1[4];
    char pais1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // ================= CARTA 2 =================
    char estado2;
    char codigo2[4];
    char pais2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // ======= Entrada da primeira carta =======
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (Ex: A01): ");
    scanf("%3s", codigo1);

    getchar(); // limpar buffer
    printf("Digite o nome do país: ");
    fgets(pais1, sizeof(pais1), stdin);
    pais1[strcspn(pais1, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ======= Entrada da segunda carta =======
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (Ex: B02): ");
    scanf("%3s", codigo2);

    getchar(); // limpar buffer
    printf("Digite o nome do país: ");
    fgets(pais2, sizeof(pais2), stdin);
    pais2[strcspn(pais2, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // Menu interativo
    int opcao;

    printf("\n====================================\n");
    printf("### Menu De Atributos ###\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("=====================================\n");
    printf("Escolha um atributo para comparar (1-6): ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Atributo escolhido: População\n");
        printf("%s: %d habitantes\n", pais1, populacao1);
        printf("%s: %d habitantes\n", pais2, populacao2);

        if (populacao1 > populacao2)
            printf("Vencedor: %s!\n", pais1);
        else if (populacao2 > populacao1)
            printf("Vencedor: %s!\n", pais2);
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("Atributo escolhido: Área (km²)\n");
        printf("%s: %.2f km²\n", pais1, area1);
        printf("%s: %.2f km²\n", pais2, area2);

        if (area1 > area2)
            printf("Vencedor: %s!\n", pais1);
        else if (area2 > area1)
            printf("Vencedor: %s!\n", pais2);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("Atributo escolhido: PIB (bilhões de reais)\n");
        printf("%s: %.2f bilhões\n", pais1, pib1);
        printf("%s: %.2f bilhões\n", pais2, pib2);

        if (pib1 > pib2)
            printf("Vencedor: %s!\n", pais1);
        else if (pib2 > pib1)
            printf("Vencedor: %s!\n", pais2);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Atributo escolhido: Pontos Turísticos\n");
        printf("%s: %d pontos\n", pais1, pontosTuristicos1);
        printf("%s: %d pontos\n", pais2, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Vencedor: %s!\n", pais1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("Vencedor: %s!\n", pais2);
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Atributo escolhido: Densidade Demográfica (hab/km²)\n");
        printf("%s: %.2f hab/km²\n", pais1, densidade1);
        printf("%s: %.2f hab/km²\n", pais2, densidade2);

        if (densidade1 < densidade2)
            printf("Vencedor: %s!\n", pais1);
        else if (densidade2 < densidade1)
            printf("Vencedor: %s!\n", pais2);
        else
            printf("Empate!\n");
        break;

    case 6:
        printf("Atributo escolhido: PIB per Capita\n");
        printf("%s: R$ %.2f\n", pais1, pibPerCapita1);
        printf("%s: R$ %.2f\n", pais2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2)
            printf("Vencedor: %s!\n", pais1);
        else if (pibPerCapita2 > pibPerCapita1)
            printf("Vencedor: %s!\n", pais2);
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opção inválida! Reinicie o programa e escolha um número entre 1 e 6.\n");
        break;
    }

    printf("=====================================\n");

    return 0;
}
