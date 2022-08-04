#include <stdio.h>

int main () {

    int n;
    int i, k;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        for(k=0; k<n; k++) {
            if((i*k)%n==1 && i<=k) printf("(%d,%d)\n", i, k);
        }
    }
    return 0;
}