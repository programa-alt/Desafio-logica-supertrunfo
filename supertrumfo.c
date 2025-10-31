# Desafio-logica-supertrunfo
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Pais {
    char nome[30];
    float populacao;      // em milhões
    float area;           // em km²
    float pib;            // em trilhões de dólares
    float expectativaVida; // em anos
};

int main() {
    struct Pais paises[4] = {
        {"Brasil", 214.0, 8516.0, 2.0, 75.9},
        {"Estados Unidos", 331.0, 9834.0, 25.0, 79.1},
        {"Japão", 126.0, 377.0, 5.0, 84.7},
        {"Alemanha", 83.0, 357.0, 4.0, 81.2}
    };

    srand(time(NULL));

    int jogador = rand() % 4;
    int computador = rand() % 4;

    // Garante que não seja o mesmo país
    while (computador == jogador) {
        computador = rand() % 4;
    }

    int escolha;
    printf("=== SUPER TRUNFO - PAISES ===\n");
    printf("Sua carta:\n");
    printf("País: %s\nPopulação: %.1f milhões\nÁrea: %.1f km²\nPIB: %.1f trilhões\nExpectativa de vida: %.1f anos\n",
           paises[jogador].nome, paises[jogador].populacao, paises[jogador].area,
           paises[jogador].pib, paises[jogador].expectativaVida);

    printf("\nEscolha o atributo para competir:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Expectativa de Vida\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\nCarta do Computador:\n");
    printf("País: %s\nPopulação: %.1f milhões\nÁrea: %.1f km²\nPIB: %.1f trilhões\nExpectativa de vida: %.1f anos\n\n",
           paises[computador].nome, paises[computador].populacao, paises[computador].area,
           paises[computador].pib, paises[computador].expectativaVida);

    // Estruturas de decisão para comparar os atributos
    switch (escolha) {
        case 1:
            if (paises[jogador].populacao > paises[computador].populacao)
                printf("Você venceu! Maior população!\n");
            else if (paises[jogador].populacao < paises[computador].populacao)
                printf("Você perdeu! O computador tem maior população.\n");
            else
                printf("Empate!\n");
            break;

        case 2:
            if (paises[jogador].area > paises[computador].area)
                printf("Você venceu! Maior área!\n");
            else if (paises[jogador].area < paises[computador].area)
                printf("Você perdeu! O computador tem maior área.\n");
            else
                printf("Empate!\n");
            break;

        case 3:
            if (paises[jogador].pib > paises[computador].pib)
                printf("Você venceu! Maior PIB!\n");
            else if (paises[jogador].pib < paises[computador].pib)
                printf("Você perdeu! O computador tem maior PIB.\n");
            else
                printf("Empate!\n");
            break;

        case 4:
            if (paises[jogador].expectativaVida > paises[computador].expectativaVida)
                printf("Você venceu! Maior expectativa de vida!\n");
            else if (paises[jogador].expectativaVida < paises[computador].expectativaVida)
                printf("Você perdeu! O computador tem maior expectativa de vida.\n");
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    printf("\n=== Fim do Jogo ===\n");
    return 0;
}
