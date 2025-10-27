# Super Trunfo - Países

Este é um jogo de **Super Trunfo** em C, onde o jogador pode comparar atributos de duas cartas de países. O jogo inclui um menu interativo e lógica de comparação para diversos atributos.

---

## Funcionalidades

- Cadastro de duas cartas de países com os seguintes atributos:
  - Estado da carta (A-H)
  - Código da carta (Ex: A01)
  - Nome do país
  - População
  - Área (km²)
  - PIB (bilhões de reais)
  - Número de pontos turísticos
  - Menu interativo usando `switch` para escolher o atributo a ser comparado.
  - Comparação dos atributos usando regras específicas:
  - Maior valor vence (População, Área, PIB, Pontos Turísticos, PIB per Capita)
  - Menor valor vence (Densidade demográfica)
  - Exibição clara do resultado da comparação:
  - Nome dos países
  - Valor do atributo escolhido
  - País vencedor ou empate

---

## Requisitos

- Sistema operacional: Windows (para suporte a acentuação no terminal)
- Compilador C (GCC, MinGW, etc.)
- Terminal com suporte a UTF-8

---

## Como Compilar

No terminal, navegue até a pasta do projeto e digite:

```bash
gcc -o SuperTrunfo3 main.c
Isto gerará o executável supertrunfo.exe.

Como Executar
No terminal, execute:

bash
./SuperTrunfo3
O programa irá solicitar:

Dados da primeira carta (estado, código, país, população, área, PIB e pontos turísticos)

Dados da segunda carta

Escolha do atributo para comparação (1-6)

Menu de Atributos
Opção	Atributo
1	População
2	Área (km²)
3	PIB (bilhões de reais)
4	Número de Pontos Turísticos
5	Densidade Populacional
6	PIB per Capita

Exemplo de Execução
Digite o estado da primeira carta (A-H): A
Digite o código da primeira carta (Ex: A01): A01
Digite o nome do país: Brasil
Digite a população: 214000000
Digite a área (em km²): 8515767
Digite o PIB (em bilhões de reais): 1850
Digite o número de pontos turísticos: 150

Digite o estado da segunda carta (A-H): B
Digite o código da segunda carta (Ex: B02): B02
Digite o nome do país: Argentina
Digite a população: 45000000
Digite a área (em km²): 2780400
Digite o PIB (em bilhões de reais): 550
Digite o número de pontos turísticos: 120

Escolha um atributo para comparar (1-6): 1

Atributo escolhido: População
Brasil: 214000000 habitantes
Argentina: 45000000 habitantes
Vencedor: Brasil!
