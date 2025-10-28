Super Trunfo – Desafio Nível Mestre (C)

Este projeto é a versão nível mestre do clássico jogo Super Trunfo, desenvolvido em C, onde o jogador compara duas cartas de países usando dois atributos numéricos diferentes.

O código integra conceitos de lógica de programação como estruturas de decisão, menus interativos, cálculos de atributos e exibição clara de resultados.

Objetivo

Permitir que o jogador cadastre duas cartas de países.

Escolher dois atributos diferentes para comparar entre as cartas.

Determinar a carta vencedora com base na soma dos valores dos atributos escolhidos.

Observação: Para densidade demográfica, o menor valor vence.

Funcionalidades

Cadastro de cartas com atributos:

Estado (A-H)

Código (ex: A01)

Nome do país

População

Área (km²)

PIB (bilhões)

Número de pontos turísticos

Cálculos automáticos:

Densidade demográfica = população / área

PIB per capita = PIB / população

Menu interativo de atributos para comparação:

População

Área

PIB

Pontos turísticos

Densidade demográfica

PIB per capita

Comparação de dois atributos diferentes.

Cálculo da soma dos atributos e exibição do vencedor final ou empate.

Lógica do Jogo

Jogador escolhe primeiro e segundo atributo (não podem ser iguais).

Valores dos atributos são exibidos para cada carta.

Soma dos valores dos atributos escolhidos determina o vencedor.

Em caso de empate, uma mensagem é exibida.

Tecnologias

Linguagem: C

Compilador: GCC recomendado

IDE: VS Code ou Code::Blocks

Biblioteca: <windows.h> (para acentuação UTF-8 no Windows)

Estrutura do Código

Entrada de dados das duas cartas

Cálculos de densidade e PIB per capita

Menu interativo com switch

Comparação usando if-else

Impressão formatada de resultados

Como Executar

Salve o código como SuperTrunfo3.c

Compile com:

gcc SuperTrunfo3.c -o SuperTrunfo3


Execute:

./SuperTrunfo3


Siga as instruções no terminal para inserir os dados das cartas e escolher os atributos.

Exemplo de Execução
Digite o estado da primeira carta (A-H): A
Digite o código da primeira carta: A01
Digite o nome do país: Brasil
Digite a população: 214000000
Digite a área (km²): 8515767
Digite o PIB (bilhões): 9700
Digite o número de pontos turísticos: 25

Digite o estado da segunda carta (A-H): B
Digite o código da segunda carta: B02
Digite o nome do país: Argentina
Digite a população: 46000000
Digite a área (km²): 2780000
Digite o PIB (bilhões): 4000
Digite o número de pontos turísticos: 18

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

Autor

Fábio
Desafio: Super Trunfo – Nível Mestre (C)
Disciplina: Introdução à Programação de Computadores - 1º Semestre
