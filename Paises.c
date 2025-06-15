#include <stdio.h>
#include <string.h> // Para usar strcpy

// Estrutura para representar um Estado
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
} Estado;

// Estrutura para representar um País
typedef struct {
    char nome[50];
    Estado estados[4];
    int numEstados;
} Pais;

int main() {
    Pais brasil;
    Pais peru;

    // --- Cadastro da carta do Brasil ---

    // Nome do país
    strcpy(brasil.nome, "Brasil");
    brasil.numEstados = 4;

    // Estados do Brasil
    strcpy(brasil.estados[0].nome, "Rio de Janeiro");
    brasil.estados[0].populacao = 17000000; // Exemplo de população
    brasil.estados[0].area = 43280.0;       // Exemplo de área (km²)
    brasil.estados[0].pib = 700.5;          // Exemplo de PIB (bilhões)
    brasil.estados[0].numPontosTuristicos = 20; // Exemplo de pontos turísticos

    strcpy(brasil.estados[1].nome, "Sao Paulo");
    brasil.estados[1].populacao = 46000000;
    brasil.estados[1].area = 248222.0;
    brasil.estados[1].pib = 2300.0;
    brasil.estados[1].numPontosTuristicos = 30;

    strcpy(brasil.estados[2].nome, "Minas Gerais");
    brasil.estados[2].populacao = 21000000;
    brasil.estados[2].area = 586522.0;
    brasil.estados[2].pib = 600.0;
    brasil.estados[2].numPontosTuristicos = 25;

    strcpy(brasil.estados[3].nome, "Bahia");
    brasil.estados[3].populacao = 15000000;
    brasil.estados[3].area = 564733.0;
    brasil.estados[3].pib = 350.0;
    brasil.estados[3].numPontosTuristicos = 18;

    // --- Cadastro da carta do Peru ---

    // Nome do país
    strcpy(peru.nome, "Peru");
    peru.numEstados = 4; 

    // Estados do Peru
    strcpy(peru.estados[0].nome, "Lima");
    peru.estados[0].populacao = 10000000;
    peru.estados[0].area = 2670.0;
    peru.estados[0].pib = 150.0;
    peru.estados[0].numPontosTuristicos = 10;

    strcpy(peru.estados[1].nome, "Arequipa");
    peru.estados[1].populacao = 1500000;
    peru.estados[1].area = 63345.0;
    peru.estados[1].pib = 30.0;
    peru.estados[1].numPontosTuristicos = 8;
    
    strcpy(peru.estados[2].nome, "Cusco");
    peru.estados[2].populacao = 1300000;
    peru.estados[2].area = 71986.0;
    peru.estados[2].pib = 25.0;
    peru.estados[2].numPontosTuristicos = 15;

    strcpy(peru.estados[3].nome, "Puno");
    peru.estados[3].populacao = 1200000;
    peru.estados[3].area = 66997.0;
    peru.estados[3].pib = 20.0;
    peru.estados[3].numPontosTuristicos = 7;

    return 0;
}
