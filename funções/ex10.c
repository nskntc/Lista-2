#include <stdio.h>
 
/**
 * @brief Função que calcula o valor de pi usando a série proposta por John Wallis.
 * 
 * @param n quantidade de termos da série
 * @return o valor aproximado da constante pi
 */
double compute_pi( int n );
 
int main() {
 
    int n;
    double pi;
    scanf("%d", &n);
    if(n>0) pi=compute_pi(n);
    printf("%.12lf\n", pi);
 
    return 0;
}
 
double compute_pi( int n ) {
    int i=0;
    double x=2, y=1, pi=2;
    while(i<n) {
        pi=pi*(x/y);
        i++;
        if(i>=n) break;
        y=y+2;
        pi=pi*(x/y);
        i++;
        x=x+2;
    }

    return pi;
}