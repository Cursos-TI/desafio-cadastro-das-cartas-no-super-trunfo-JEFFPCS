#include <stdio.h>
#include <string.h>

// Estrutura para representar uma cidade
struct Cidade {
    char nome[50];
};

// Estrutura para representar um estado
struct Estado {
    char nome[50];
    struct Cidade cidades[4]; // Assumindo 4 cidades por estado
};

// Estrutura para representar um país (a carta)
struct Pais {
    char nome[50];
    struct Estado estados[4]; // Assumindo 4 estados por país
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Declaração das duas cartas (países)
    struct Pais cartaBrasil;
    struct Pais cartaPeru;

    // --- Cadastro da carta do Brasil ---
    strcpy(cartaBrasil.nome, "Brasil");
    cartaBrasil.populacao = 215000000; // Exemplo de população
    cartaBrasil.area = 8515767.0;     // Exemplo de área em km²
    cartaBrasil.pib = 1600.0;         // Exemplo de PIB em bilhões de dólares
    cartaBrasil.pontos_turisticos = 250; // Exemplo de número de pontos turísticos

    // Estados do Brasil
    // Rio de Janeiro
    strcpy(cartaBrasil.estados[0].nome, "Rio de Janeiro");
    strcpy(cartaBrasil.estados[0].cidades[0].nome, "Rio de Janeiro");
    strcpy(cartaBrasil.estados[0].cidades[1].nome, "Campo Grande");
    strcpy(cartaBrasil.estados[0].cidades[2].nome, "Niterói");
    strcpy(cartaBrasil.estados[0].cidades[3].nome, "São Gonçalo");

    // São Paulo
    strcpy(cartaBrasil.estados[1].nome, "São Paulo");
    strcpy(cartaBrasil.estados[1].cidades[0].nome, "Pinheiros");
    strcpy(cartaBrasil.estados[1].cidades[1].nome, "Guarulhos");
    strcpy(cartaBrasil.estados[1].cidades[2].nome, "São José dos Campos");
    strcpy(cartaBrasil.estados[1].cidades[3].nome, "Santos");

    // Minas Gerais
    strcpy(cartaBrasil.estados[2].nome, "Minas Gerais");
    strcpy(cartaBrasil.estados[2].cidades[0].nome, "São Lourenço");
    strcpy(cartaBrasil.estados[2].cidades[1].nome, "Belo Horizonte");
    strcpy(cartaBrasil.estados[2].cidades[2].nome, "Contagem");
    strcpy(cartaBrasil.estados[2].cidades[3].nome, "Betim");

    // Bahia
    strcpy(cartaBrasil.estados[3].nome, "Bahia");
    strcpy(cartaBrasil.estados[3].cidades[0].nome, "Salvador");
    strcpy(cartaBrasil.estados[3].cidades[1].nome, "Ilhéus");
    strcpy(cartaBrasil.estados[3].cidades[2].nome, "Jequié");
    strcpy(cartaBrasil.estados[3].cidades[3].nome, "Feira de Santana");

    // --- Cadastro da carta do Peru ---
    strcpy(cartaPeru.nome, "Peru");
    cartaPeru.populacao = 33000000; // Exemplo de população
    cartaPeru.area = 1285216.0;      // Exemplo de área em km²
    cartaPeru.pib = 220.0;          // Exemplo de PIB em bilhões de dólares
    cartaPeru.pontos_turisticos = 120; // Exemplo de número de pontos turísticos

    // Estados do Peru
    // Lima
    strcpy(cartaPeru.estados[0].nome, "Lima");
    strcpy(cartaPeru.estados[0].cidades[0].nome, "Lima (cidade)");
    strcpy(cartaPeru.estados[0].cidades[1].nome, "Miraflores");
    strcpy(cartaPeru.estados[0].cidades[2].nome, "San Isidro");
    strcpy(cartaPeru.estados[0].cidades[3].nome, "Barranco");

    // Arequipa
    strcpy(cartaPeru.estados[1].nome, "Arequipa");
    strcpy(cartaPeru.estados[1].cidades[0].nome, "Arequipa (cidade)");
    strcpy(cartaPeru.estados[1].cidades[1].nome, "Yanahuara");
    strcpy(cartaPeru.estados[1].cidades[2].nome, "Cayma");
    strcpy(cartaPeru.estados[1].cidades[3].nome, "Sachaca");

    // Cusco
    strcpy(cartaPeru.estados[2].nome, "Cusco");
    strcpy(cartaPeru.estados[2].cidades[0].nome, "Cusco (cidade)");
    strcpy(cartaPeru.estados[2].cidades[1].nome, "Machu Picchu");
    strcpy(cartaPeru.estados[2].cidades[2].nome, "Ollantaytambo");
    strcpy(cartaPeru.estados[2].cidades[3].nome, "Pisac");

    // Puno
    strcpy(cartaPeru.estados[3].nome, "Puno");
    strcpy(cartaPeru.estados[3].cidades[0].nome, "Puno (cidade)");
    strcpy(cartaPeru.estados[3].cidades[1].nome, "Juliaca");
    strcpy(cartaPeru.estados[3].cidades[2].nome, "Desaguadero");
    strcpy(cartaPeru.estados[3].cidades[3].nome, "Chucuito");

    // --- Exibição dos dados ---

    printf("--- Carta: %s ---\n", cartaBrasil.nome);
    printf("População: %d\n", cartaBrasil.populacao);
    printf("Área: %.2f km²\n", cartaBrasil.area);
    printf("PIB: %.2f bilhões\n", cartaBrasil.pib);
    printf("Pontos Turísticos: %d\n", cartaBrasil.pontos_turisticos);

    printf("  Estado: %s\n", cartaBrasil.estados[0].nome);
    printf("    Cidades: %s, %s, %s, %s\n",
           cartaBrasil.estados[0].cidades[0].nome,
           cartaBrasil.estados[0].cidades[1].nome,
           cartaBrasil.estados[0].cidades[2].nome,
           cartaBrasil.estados[0].cidades[3].nome);

    printf("  Estado: %s\n", cartaBrasil.estados[1].nome);
    printf("    Cidades: %s, %s, %s, %s\n",
           cartaBrasil.estados[1].cidades[0].nome,
           cartaBrasil.estados[1].cidades[1].nome,
           cartaBrasil.estados[1].cidades[2].nome,
           cartaBrasil.estados[1].cidades[3].nome);

    printf("  Estado: %s\n", cartaBrasil.estados[2].nome);
    printf("    Cidades: %s, %s, %s, %s\n",
           cartaBrasil.estados[2].cidades[0].nome,
           cartaBrasil.estados[2].cidades[1].nome,
           cartaBrasil.estados[2].cidades[2].nome,
           cartaBrasil.estados[2].cidades[3].nome);

    printf("  Estado: %s\n", cartaBrasil.estados[3].nome);
    printf("    Cidades: %s, %s, %s, %s\n",
           cartaBrasil.estados[3].cidades[0].nome,
           cartaBrasil.estados[3].cidades[1].nome,
           cartaBrasil.estados[3].cidades[2].nome,
           cartaBrasil.estados[3].cidades[3].nome);

    printf("\n--- Carta: %s ---\n", cartaPeru.nome);
    printf("População: %d\n", cartaPeru.populacao);
    printf("Área: %.2f km²\n", cartaPeru.area);
    printf("PIB: %.2f bilhões\n", cartaPeru.pib);
    printf("Pontos Turísticos: %d\n", cartaPeru.pontos_turisticos);

    printf("  Estado: %s\n", cartaPeru.estados[0].nome);
    printf("    Cidades: %s, %s, %s, %s\n",
           cartaPeru.estados[0].cidades[0].nome,
           cartaPeru.estados[0].cidades[1].nome,
           cartaPeru.estados[0].cidades[2].nome,
           cartaPeru.estados[0].cidades[3].nome);

    printf("  Estado: %s\n", cartaPeru.estados[1].nome);
    printf("    Cidades: %s, %s, %s, %s\n",
           cartaPeru.estados[1].cidades[0].nome,
           cartaPeru.estados[1].cidades[1].nome,
           cartaPeru.estados[1].cidades[2].nome,
           cartaPeru.estados[1].cidades[3].nome);

    printf("  Estado: %s\n", cartaPeru.estados[2].nome);
    printf("    Cidades: %s, %s, %s, %s\n",
           cartaPeru.estados[2].cidades[0].nome,
           cartaPeru.estados[2].cidades[1].nome,
           cartaPeru.estados[2].cidades[2].nome,
           cartaPeru.estados[2].cidades[3].nome);

    printf("  Estado: %s\n", cartaPeru.estados[3].nome);
    printf("    Cidades: %s, %s, %s, %s\n",
           cartaPeru.estados[3].cidades[0].nome,
           cartaPeru.estados[3].cidades[1].nome,
           cartaPeru.estados[3].cidades[2].nome,
           cartaPeru.estados[3].cidades[3].nome);

    return 0;
}