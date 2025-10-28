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
    // Menu interativo com dois atributos
    int opcao1, opcao2;
    float soma1 = 0, soma2 = 0;

    printf("\n====================================\n");
    printf("### Menu De Atributos ###\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("=====================================\n");

    // Escolher o primeiro atributo
    printf("Escolha o primeiro atributo (1-6): ");
    scanf("%d", &opcao1);

    // Escolher o segundo atributo (diferente do primeiro)
    do
    {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
        if (opcao2 == opcao1)
            printf("Você já escolheu esse atributo! Escolha outro.\n");
    } while (opcao2 == opcao1);

    printf("\n=====================================\n");

    // ===== PRIMEIRO ATRIBUTO =====
    switch (opcao1)
    {
    case 1:
        printf("Atributo 1: População\n");
        printf("%s: %d | %s: %d\n", pais1, populacao1, pais2, populacao2);
        soma1 += populacao1;
        soma2 += populacao2;
        break;

    case 2:
        printf("Atributo 1: Área\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, area1, pais2, area2);
        soma1 += area1;
        soma2 += area2;
        break;

    case 3:
        printf("Atributo 1: PIB\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, pib1, pais2, pib2);
        soma1 += pib1;
        soma2 += pib2;
        break;

    case 4:
        printf("Atributo 1: Pontos Turísticos\n");
        printf("%s: %d | %s: %d\n", pais1, pontosTuristicos1, pais2, pontosTuristicos2);
        soma1 += pontosTuristicos1;
        soma2 += pontosTuristicos2;
        break;

    case 5:
        printf("Atributo 1: Densidade Demográfica\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, densidade1, pais2, densidade2);
        // menor densidade vence → ainda soma valores
        soma1 += (1 / densidade1);
        soma2 += (1 / densidade2);
        break;

    case 6:
        printf("Atributo 1: PIB per Capita\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, pibPerCapita1, pais2, pibPerCapita2);
        soma1 += pibPerCapita1;
        soma2 += pibPerCapita2;
        break;

    default:
        printf("Opção inválida!\n");
        return 0;
    }

    // ===== SEGUNDO ATRIBUTO =====
    switch (opcao2)
    {
    case 1:
        printf("\nAtributo 2: População\n");
        printf("%s: %d | %s: %d\n", pais1, populacao1, pais2, populacao2);
        soma1 += populacao1;
        soma2 += populacao2;
        break;

    case 2:
        printf("\nAtributo 2: Área\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, area1, pais2, area2);
        soma1 += area1;
        soma2 += area2;
        break;

    case 3:
        printf("\nAtributo 2: PIB\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, pib1, pais2, pib2);
        soma1 += pib1;
        soma2 += pib2;
        break;

    case 4:
        printf("\nAtributo 2: Pontos Turísticos\n");
        printf("%s: %d | %s: %d\n", pais1, pontosTuristicos1, pais2, pontosTuristicos2);
        soma1 += pontosTuristicos1;
        soma2 += pontosTuristicos2;
        break;

    case 5:
        printf("\nAtributo 2: Densidade Demográfica\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, densidade1, pais2, densidade2);
        soma1 += (1 / densidade1);
        soma2 += (1 / densidade2);
        break;

    case 6:
        printf("\nAtributo 2: PIB per Capita\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, pibPerCapita1, pais2, pibPerCapita2);
        soma1 += pibPerCapita1;
        soma2 += pibPerCapita2;
        break;

    default:
        printf("Opção inválida!\n");
        return 0;
    }

    // ===== RESULTADO FINAL =====
    printf("\n=====================================\n");
    printf("Soma total dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    if (soma1 > soma2)
        printf("Vencedor final: %s!\n", pais1);
    else if (soma2 > soma1)
        printf("Vencedor final: %s!\n", pais2);
    else
        printf("Empate!\n");

    printf("=====================================\n");
}
