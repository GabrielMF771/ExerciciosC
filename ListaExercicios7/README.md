# Sétima Lista de Exercícios em C

## Ponteiros

1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use *&*). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.

2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

3. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B, por exemplo, e, após a execução da função, A conterá o valor de B e B terá o valor de A. Exiba os valores na função main.

4. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.

5. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz.

6. Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings. Não utilize string.h.

7. Escreva uma função que, dado um número real passado como parâmetro, retorne a parte inteira e a parte fracionária deste número. Escreva um programa que chama esta função.

   Protótipo:

   ~~~c
    void frac(float num, int* inteiro, float* frac);
    ~~~