LISTA-05: (Ponteiros II e Recursividade)

1. Escreva uma função que dado um número real passado como parâmetro,
retorne a parte inteira e a parte fracionária deste número. Escreva um
programa que chama esta função.
Protótipo:
void frac(float num, int* inteiro, float* frac);

2. Implemente uma função que calcule a área da superfície e o volume de uma
esfera de raio R. Essa função deve obedecer ao protótipo:
void calc_esfera(float R, float* area, float* volume);
A área da superfície e o volume são dados, respectivamente, por:
A = 4 * p * R²
V = 4 / 3 * p * R³

3. Escreva um programa que declare um Array de inteiros e um ponteiro para
inteiros. Associe o ponteiro ao Array. Agora, some mais um (+1) a cada
posição do Array usando o ponteiro (use *).

4. Considere a seguinte declaração: int A, *B, **C, ***D; escreva um programa
que leia a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada
para calcular o dobro, C o triplo e D o quádruplo.

5. Crie uma função recursiva que receba um número inteiro positivo N e calcule
o somatório dos números de 1 a N.

6. Faça uma função recursiva que receba um número inteiro positivo N e
imprima todos os números naturais de 0 até N em ordem decrescente.

7. Escreva uma função recursiva que exibe todos os elementos em um array de
inteiros, separados por espaço.

8. Faça uma função recursiva que receba um número inteiro positivo N e
retorne o fatorial desse número.

9. Faça uma função recursiva que permita inverter um número inteiro N.
Exemplo: 123  -321.

10. Dado um número inteiro N, escreva uma função recursiva que calcule a
Fibonacci deste número.

DESAFIOS:

1. Dado um número N na base decimal, escreva uma função recursiva que
converte este número para binário.