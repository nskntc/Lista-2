#include <stdio.h>

/**
 * @brief Retorna o fatorial de n;
 * 
 * @param n Número que vai ser calculado o fatorial;
 * @param f Fatorial do número n;
 * @return unsigned long int fat Fatorial de n;
 */
unsigned long int fat (unsigned int n);

int main () {
    unsigned int n;
    unsigned long int f;
    scanf("%u", &n);
    f= fat(n);
    if (f>=0) printf("%u! = %lu\n", n, f);
    
    return 0;
}

unsigned long int fat (unsigned int n) {
    unsigned long int f;
    for(f=1; n>1; n--) {
        f=f*n;
    }
    return f;
}

