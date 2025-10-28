Super Trunfo - Desafio Nível Mestre (C)

Este projeto é o nível mestre do jogo Super Trunfo em C, onde o jogador pode comparar duas cartas de países com dois atributos diferentes.
O código integra conceitos de estruturas de decisão (if, switch), cálculos com variáveis, entrada e saída de dados e lógica de comparação.

Objetivo do Desafio

Permitir que o jogador:

Cadastre duas cartas de países com atributos numéricos.

Escolha dois atributos diferentes para comparar entre as cartas.

Veja qual carta vence com base na soma dos dois atributos.

A exceção continua sendo a densidade demográfica, onde o menor valor vence.

Funcionalidades

Cadastro de duas cartas de países com os seguintes atributos:

Estado (A-H)

Código (ex: A01)

Nome do país

População

Área (km²)

PIB (em bilhões)

Número de pontos turísticos

Cálculo automático:

Densidade demográfica = população / área

PIB per capita = PIB total / população

Menu interativo com 6 opções de atributos para comparar:

População

Área

PIB

Pontos turísticos

Densidade demográfica

PIB per capita

Comparação de dois atributos diferentes (sem repetição).

Exibição dos valores de cada atributo para cada carta.

Cálculo da soma dos dois atributos escolhidos.

Exibição clara do vencedor ou mensagem de empate.

Lógica de Comparação

O jogador escolhe dois atributos diferentes.

O programa compara ambos e soma seus valores.

A carta com maior soma vence.

Se as somas forem iguais → Empate!

Tecnologias Utilizadas

Linguagem: C

Compilador recomendado: GCC

IDE sugerida: VS Code ou Code::Blocks

Biblioteca: <windows.h> para compatibilidade com acentuação UTF-8 no Windows

Estrutura do Código

Entrada de dados para as duas cartas

Cálculos automáticos (densidade e PIB per capita)

Menus interativos com switch

Lógica condicional (if, else if, else)

Impressão formatada dos resultados

Como Executar

Copie o código para um arquivo chamado super_trunfo_mestre.c

Compile com o comando:

gcc super_trunfo_mestre.c -o super_trunfo_mestre


Execute:

./super_trunfo_mestre


Siga as instruções no terminal para inserir os dados das cartas e escolher os atributos.

Exemplo de Execução
Digite o estado da primeira carta (A-H): A
Digite o código da primeira carta (Ex: A01): A01
Digite o nome do país: Brasil
Digite a população: 214000000
Digite a área (em km²): 8515767
Digite o PIB (em bilhões de reais): 9700
Digite o número de pontos turísticos: 25

Digite o estado da segunda carta (A-H): B
Digite o código da segunda carta (Ex: B02): B02
Digite o nome do país: Argentina
Digite a população: 46000000
Digite a área (em km²): 2780000
Digite o PIB (em bilhões de reais): 4000
Digite o número de pontos turísticos: 18

====================================
### Menu De Atributos ###
1 - População
2 - Área
3 - PIB
4 - Número de Pontos Turísticos
5 - Densidade Populacional
6 - PIB per Capita
=====================================
Escolha o primeiro atributo (1-6): 3
Escolha o segundo atributo (diferente do primeiro): 6

Atributo 1: PIB
Brasil: 9700.00 | Argentina: 4000.00

Atributo 2: PIB per Capita
Brasil: 45233.64 | Argentina: 86956.52

Soma total dos atributos:
Brasil: 54933.64
Argentina: 90956.52
Vencedor final: Argentina!
=====================================

Autor

Desenvolvido por Fábio
Desafio: Super Trunfo - Nível Mestre (C)
Disciplina: Introdução à Programação de Computadores
Primeiro Semestre
