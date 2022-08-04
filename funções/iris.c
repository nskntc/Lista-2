#include <stdio.h>
#include <math.h>

void treina (int n, double * tp, double * ts, double * lp);
double dist(double a1, double a2, double a3, double b1, double b2, double b3);

int main() {
    double V1, V2, V3;          //Virginica
    double Ve1, Ve2, Ve3;       //Versicolor
    double S1, S2, S3;          //Setosa
    int n, i;
    double t1, t2, t3;          //Amostra/teste
    double dV, dVe, dS;         //Distâncias para Virginica, Versicolor e Setosa

    scanf("%d", &n);
    treina(n, &V1, &V2, &V3);
    scanf("%d", &n);
    treina(n, &Ve1, &Ve2, &Ve3);
    scanf("%d", &n);
    treina(n, &S1, &S2, &S3);
    scanf("%d", &n);

    //Fase de testes
    for(i=0; i<n; i++) {
        scanf("%lf%lf%lf", &t1, &t2, &t3);
        dV=dist(t1, t2, t3, V1, V2, V3);//Distância para Virginica
        dVe=dist(t1, t2, t3, Ve1, Ve2, Ve3);//Distância para Versicolor
        dS=dist(t1, t2, t3, S1, S2, S3);//Disância para Setora

        if(dV<=dVe && dV<=dS) printf("Virginica\n");
        if(dVe<=dV && dVe<=dS) printf("Versicolor/n");
        if(dS<=dV && dS<=dVe) printf("Setosa\n");
    }
    return 0;
}
void treina (int n, double * tp, double * ts, double * lp) {
    int i;
    double x, y, z;
    *tp=0; *ts=0; *lp=0;
    for(i=0; i<n; i++) {
        * tp+=x;
        * ts+=y;
        * lp+=z;
    }
    * tp/=n;
    * ts/=n;
    * lp/=n;
    printf("Media: %lf ,%lf ,%lf\n", *tp, *ts, *lp);
}

double dist(double a1, double a2, double a3, double b1, double b2, double b3) {
    double d;
    a1-=b1;
    a2-=b2;
    a3-=b3;
    d=sqrt((a1*a1)+(a2*a2)+(a3*a3));
    printf("Dist: %lf\n", d);
    return d;
}