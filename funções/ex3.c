#include <stdio.h>

/**
 * @brief Separa os dígitos de um número com 3 dígitos;
 * @param n Parâmetro de entrada e corresponde a um número inteiro (com três dígitos);
 * @param c Primeiro dígito;
 * @param d Segundo dígito;
 * @param u Terceiro dígito;
 * 
 * @return int
 */
void separaDigitos (int n, int *c, int *d, int *u);

int main() {

    int n, n2;
    int c, d, u;
    scanf("%d", &n);
    separaDigitos(n, &u, &d, &c);
    n2=(c*100)+(d*10)+u;
    printf("%d\n", n2);

    return 0;
}

void separaDigitos (int n, int *c, int *d, int *u) {
    *c=n/100;
    *d=(n%100)/10;
    *u=(n%100)%10;
}