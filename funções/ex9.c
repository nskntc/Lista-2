#include <stdio.h>

/**
 * @brief Converte número em Notas e moedas.
 * 
 * @param n valor inteiro a ser convertido em notas e moedas
 * @param n100 número de notas de 100
 * @param n50 número de notas de 50
 * @param n10 número de notas de dez
 * @param m1 número de moedas de 1 Real
 */
void converteEmNotasMoedas(int n, int *n100, int *n50, int *n10, int *m1);

int main () {

    int n, x, y, z, w;
    scanf("%d", &n);
    converteEmNotasMoedas(n, &x, &y, &z, &w);
    printf("NOTAS DE 100 = %d\n", x);
    printf("NOTAS DE 50 = %d\n", y);
    printf("NOTAS DE 10 = %d\n", z);
    printf("MOEDAS DE 1 = %d\n", w);

    return 0;
}

void converteEmNotasMoedas(int n, int *n100, int *n50, int *n10, int *m1) {
    *n100=n/100;
    n=n%100;
    *n50=n/50;
    n=n%50;
    *n10=n/10;
    n=n%10;
    *m1=n;
}