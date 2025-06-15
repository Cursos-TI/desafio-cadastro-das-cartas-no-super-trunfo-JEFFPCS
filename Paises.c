#include <stdio.h>
#include <string.h>

// Estrutura para armazenar dados de uma cidade
struct Cidade {
    char nome[50];
};

// Estrutura para armazenar dados de um estado
struct Estado {
    char nome[50];
    struct Cidade cidades[4]; // Assumindo 4 cidades por estado
};

// Estrutura para armazenar dados de um país (carta)
struct Pais {
    char nome[50];
    struct Estado estados[4]; // Assumindo 4 estados por país
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // --- Carta 1: Brasil ---
    struct Pais brasil;
    strcpy(brasil.nome, "Brasil");
    brasil.populacao = 215000000;
    brasil.area = 8515767.0;
    brasil.pib = 1645000000000.0;
    brasil.pontos_turisticos = 25000;

    // Estado: Rio de Janeiro
    strcpy(brasil.estados[0].nome, "Rio de Janeiro");
    strcpy(brasil.estados[0].cidades[0].nome, "Cidade do Rio");
    strcpy(brasil.estados[0].cidades[1].nome, "Campo Grande");
    strcpy(brasil.estados[0].cidades[2].nome, "Niterói");
    strcpy(brasil.estados[0].cidades[3].nome, "Sao Goncalo");

    // Estado: Sao Paulo
    strcpy(brasil.estados[1].nome, "Sao Paulo");
    strcpy(brasil.estados[1].cidades[0].nome, "Pinheiros");
    strcpy(brasil.estados[1].cidades[1].nome, "Guarulhos");
    strcpy(brasil.estados[1].cidades[2].nome, "Sao Jose dos Campos");
    strcpy(brasil.estados[1].cidades[3].nome, "Santos");

    // Estado: Minas Gerais
    strcpy(brasil.estados[2].nome, "Minas Gerais");
    strcpy(brasil.estados[2].cidades[0].nome, "Sao Lourenco");
    strcpy(brasil.estados[2].cidades[1].nome, "Belo Horizonte");
    strcpy(brasil.estados[2].cidades[2].nome, "Contagem");
    strcpy(brasil.estados[2].cidades[3].nome, "Betim");

    // Estado: Bahia
    strcpy(brasil.estados[3].nome, "Bahia");
    strcpy(brasil.estados[3].cidades[0].nome, "Salvador");
    strcpy(brasil.estados[3].cidades[1].nome, "Ilheus");
    strcpy(brasil.estados[3].cidades[2].nome, "Jequie");
    strcpy(brasil.estados[3].cidades[3].nome, "Feira de Santana");

    // --- Carta 2: Peru ---
    struct Pais peru;
    strcpy(peru.nome, "Peru");
    peru.populacao = 33000000;
    peru.area = 1285216.0;
    peru.pib = 227000000000.0;
    peru.pontos_turisticos = 12000;

    // Estado: Lima
    strcpy(peru.estados[0].nome, "Lima");
    strcpy(peru.estados[0].cidades[0].nome, "Ancon");
    strcpy(peru.estados[0].cidades[1].nome, "Comas");
    strcpy(peru.estados[0].cidades[2].nome, "Barranco");
    strcpy(peru.estados[0].cidades[3].nome, "Jesus Maria");

    // Estado: Arequipa
    strcpy(peru.estados[1].nome, "Arequipa");
    strcpy(peru.estados[1].cidades[0].nome, "Arequipa");
    strcpy(peru.estados[1].cidades[1].nome, "La Joya");
    strcpy(peru.estados[1].cidades[2].nome, "Vitor");
    strcpy(peru.estados[1].cidades[3].nome, "Cerro Colorado");

    // Estado: Cusco
    strcpy(peru.estados[2].nome, "Cusco");
    strcpy(peru.estados[2].cidades[0].nome, "Poroy");
    strcpy(peru.estados[2].cidades[1].nome, "San Jeronimo");
    strcpy(peru.estados[2].cidades[2].nome, "Santiago");
    strcpy(peru.estados[2].cidades[3].nome, "Cusco");

    // Estado: Puno
    strcpy(peru.estados[3].nome, "Puno");
    strcpy(peru.estados[3].cidades[0].nome, "Acora");
    strcpy(peru.estados[3].cidades[1].nome, "Coata");
    strcpy(peru.estados[3].cidades[2].nome, "San Antonio");
    strcpy(peru.estados[3].cidades[3].nome, "Puno");

    // Exibição dos dados (apenas para verificação)
    printf("--- Carta: %s ---\n", brasil.nome);
    printf("Populacao: %d\n", brasil.populacao);
    printf("Area: %.2f km2\n", brasil.area);
    printf("PIB: %.2f USD\n", brasil.pib);
    printf("Pontos Turisticos: %d\n", brasil.pontos_turisticos);
    printf("Estados:\n");
    printf("  - %s: %s, %s, %s, %s\n", brasil.estados[0].nome, brasil.estados[0].cidades[0].nome, brasil.estados[0].cidades[1].nome, brasil.estados[0].cidades[2].nome, brasil.estados[0].cidades[3].nome);
    printf("  - %s: %s, %s, %s, %s\n", brasil.estados[1].nome, brasil.estados[1].cidades[0].nome, brasil.estados[1].cidades[1].nome, brasil.estados[1].cidades[2].nome, brasil.estados[1].cidades[3].nome);
    printf("  - %s: %s, %s, %s, %s\n", brasil.estados[2].nome, brasil.estados[2].cidades[0].nome, brasil.estados[2].cidades[1].nome, brasil.estados[2].cidades[2].nome, brasil.estados[2].cidades[3].nome);
    printf("  - %s: %s, %s, %s, %s\n", brasil.estados[3].nome, brasil.estados[3].cidades[0].nome, brasil.estados[3].cidades[1].nome, brasil.estados[3].cidades[2].nome, brasil.estados[3].cidades[3].nome);

    printf("\n--- Carta: %s ---\n", peru.nome);
    printf("Populacao: %d\n", peru.populacao);
    printf("Area: %.2f km2\n", peru.area);
    printf("PIB: %.2f USD\n", peru.pib);
    printf("Pontos Turisticos: %d\n", peru.pontos_turisticos);
    printf("Estados:\n");
    printf("  - %s: %s, %s, %s, %s\n", peru.estados[0].nome, peru.estados[0].cidades[0].nome, peru.estados[0].cidades[1].nome, peru.estados[0].cidades[2].nome, peru.estados[0].cidades[3].nome);
    printf("  - %s: %s, %s, %s, %s\n", peru.estados[1].nome, peru.estados[1].cidades[0].nome, peru.estados[1].cidades[1].nome, peru.estados[1].cidades[2].nome, peru.estados[1].cidades[3].nome);
    printf("  - %s: %s, %s, %s, %s\n", peru.estados[2].nome, peru.estados[2].cidades[0].nome, peru.estados[2].cidades[1].nome, peru.estados[2].cidades[2].nome, peru.estados[2].cidades[3].nome);
    printf("  - %s: %s, %s, %s, %s\n", peru.estados[3].nome, peru.estados[3].cidades[0].nome, peru.estados[3].cidades[1].nome, peru.estados[3].cidades[2].nome, peru.estados[3].cidades[3].nome);

    return 0;
}

