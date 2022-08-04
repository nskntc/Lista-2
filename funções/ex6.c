#include <stdio.h>

/**
* @brief Função que calcula a raiz quadrada de n.
* @param n um numero real qualquer
* @param p precisão do cálculos
* @return a raiz quadrada de n
*/
double raiz( double n, double p );

/**
* Valor absoluto de um numero qualquer
* @param n um número real qualquer
* @return o valor absoluto de n
*/
double absoluto( double n );

int main() {

    double n, e, err, rn; 
    scanf("%lf", &n);
    scanf("%lf", &e);
    rn=raiz(n, e);

    return 0;
}

double raiz( double n, double p ) {
    double rn, rant=1, error;
    error=n-rn*rn;
    while (error>p) {
        rn=(rant+(n/rant))/2;
        error=n-rn*rn;
        error=absoluto(error);
        rant=rn;
        printf("r: %.9lf, err: %.9lf\n", rn, error);
    }
    return rn;

}

double absoluto( double n ) {
    if(n<0)n=-n;
    return n;
}