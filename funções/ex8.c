#include <stdio.h>
#include <math.h>

/**
 * @brief Função que calcula a potencia de p mais próximo a n.
 * 
 * @param n valor inteiro
 * @param p valor da potencia
 * @param base ponteiro que aponta para a base da potência
 * @return int pot, retorna o valor da potencia mais proxima.
 */
int next_power( int n, int p, int *base );

int main() {

    int n, p, pot, base;
    scanf("%d %d", &n, &p);
    pot=next_power(n, p, &base);
    printf("%d -> %d^%d = %d\n", n, base, p, pot);

    return 0;
}

int next_power( int n, int p, int *base ) {
    int i=0;
    int pot=0, potant=0;
    if(n>0 && p>0) {
        while (pot<=n) {
            potant=pot;
            pot=pow(i, p);
            i++;
        }
        i=i-2;
        *base=i;
    }
    if (n<0 && p>0 && (p%2)!=0) {
        while (pot>=n) {
            potant=pot;
            pot=pow(i, p);
            i--;
        }
        i=i+2;
        *base=i;
    }
    if ((n<0 && p>0 && (p%2)==0)) {
        potant=-1;
        *base=-1;
    }
    if(n==0) {
        potant=0;
        *base=0;
    }
    if (p==0) {
        potant=1;
        *base=n;
    }
    if (p==1) {
        potant=n;
        *base=n;
    }
    if(p<0) {
        potant=1;
        *base=1;
    }

    return potant;
}