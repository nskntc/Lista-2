#include <stdio.h>

/**
 * @brief Retorna o n-ésimo termo da sequência de Fibonacci
 * 
 * @param t1 primeiro termo da sequência
 * @param t2 segundo termo da sequência
 * @param z demais números da sequência
 * @param i contador da posição
 * @param n a posição do termo desejado da sequência
 * @return int o valor do n-ésimo termo da sequência
 */
int fibonacci (int t1, int t2, int n, int z, int i);

int main () {

    int t1, t2, n, z, i;
    scanf("%d %d %d", &t1, &t2, &n);
    z=fibonacci (t1, t2, n, z, i);
    printf("%d\n", z);


    return 0;
}

int fibonacci (int t1, int t2, int n, int z, int i) {
    for(i=2; i<n; i++) {
        z=t1+t2;
        t1=t2;
        t2=z;
    }
    return z;
}