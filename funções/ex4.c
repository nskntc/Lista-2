#include <stdio.h>

/**
 * @brief Returna a soma dos divisores do número n;
 * 
 * @param n
 * @return int s Soma dos divisores de n;
 */
int somaDivisores(int n);

int main() {

    int n;
    int som;
    scanf("%d", &n);
    som=somaDivisores(n);
    printf(" = %d", som);
    if(som==n) printf(" (NUMERO PERFEITO)\n");
    else printf(" (NUMERO NAO E PERFEITO)\n");

    return 0;
}

int somaDivisores(int n) {
    int s=0;
    int i;
    printf("%d = ", n);
    for(i=1; i<=(n/2); i++) {
        if(n%i==0) {
            if(i>1) printf(" + ");
            printf("%d", i);
            s+=i;
        }
    }
    return s;
}