#include <stdio.h>
#include <math.h>
/**
* Função que calculas as raízes de uma equação de grau 2.
*
* @param a: coeficiente quadrado
* @param b: coeficiente linear
* @param c: coeficiente constante
* @param px1: ponteiro para a 1 raiz
* @param px2: ponteiro para a 2 raiz
* @return int 0 para raiz única; 1 para raízes distintas; 2 para raízes imaginárias; -1 para coeficientes inválidos (não formam uma equação);
*/
int raizesEq2Grau ( double a, double b, double c, double * px1, double * px2 );

int main() {

    double a, b, c;
    double x1, x2;
    int r;
    int t;
    scanf("%lf %lf %lf", &a, &b, &c);
    r = raizesEq2Grau(a, b, c, &x1, &x2);
    if(x1>x2) {
        t=x1;
        x1=x2;
        x2=t;
    }
    if(r==0) {
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);

    }
    if(r==1) {
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    }
    if(r==2) {
        printf("RAIZES IMAGINARIAS\n");
    } 
    return 0;
}

int raizesEq2Grau (double a, double b, double c, double * px1, double * px2) {
    double delta=b*b-4*a*c;
    if(a==0) {
        if(b!=0) {
            *px1=(-c)/b;
            return 0;
        }
        else {
            return -1;
        }
    }
    if(delta==0) {
        *px1=(-b+sqrt(delta))/(2*a);
        return 0;
    } 
    else if(delta>0) {
        *px1=(-b+sqrt(delta))/(2*a);
        *px2=(-b-sqrt(delta))/(2*a);
        return 1;
    }
    else {
        return 2;
    }
}