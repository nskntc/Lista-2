#include <stdio.h>
#include<math.h>

/**
 * @brief Função que classifica uma flor Iris
 * 
 * @param pt  tamanho da petala
 * @param pl  largura da petala
 * @param st  tamanho da sepala
 * @param sl  largura da sepala
 * @param d1  ponteiro para a distancia para a classe setosa
 * @param d2  ponteiro para a distancia para a classe virginica
 * @param d3  ponteiro para a distancia para a classe versicolor
 * @return int valor total gasto pelo cliente c
 */
int classifica_iris( double pt, double pl, double st, double sl, double *d1, double *d2, double *d3 );

int main() {

    int r;
    double pt, pl, st, sl;
    double d1, d2, d3;
    while(1) {
        scanf("%lf %lf %lf %lf", &pt, &pl, &st, &sl);
        r=classifica_iris(pt, pl, st, sl, &d1, &d2, &d3);
        if(r==1) printf("(%.2lf %.2lf %.2lf) setosa", d1, d2, d3);
        if(r==2) printf("(%.2lf %.2lf %.2lf) virginica", d1, d2, d3);
        if(r==3) printf("(%.2lf %.2lf %.2lf) versicolor", d1, d2, d3);
    }

    return 0;
}

int classifica_iris( double pt, double pl, double st, double sl, double *d1, double *d2, double *d3 ){
    *d1=sqrt(pow(6.85-pt, 2)+pow(3.07-pl, 2)+pow(5.74-st, 2)+pow(2.07-sl, 2));
    *d2=sqrt(pow(5.00-pt, 2)+pow(3.41-pl, 2)+pow(1.46-st, 2)+pow(0.24-sl, 2));
    *d3=sqrt(pow(5.90-pt, 2)+pow(2.74-pl, 2)+pow(4.39-st, 2)+pow(1.43-sl, 2));
    if(*d1<*d2 && *d1<*d3) return 1;
    else if (*d2<*d1 && *d2<*d3) return 2;
    else return 3;
}