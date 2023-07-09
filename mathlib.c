#include <stdio.h>
#include <math.h>


int main(void) {
    int N, result;
    double e, sqr;

    scanf("%d", &N);

    sqr = sqrt(N);
    printf("%.8lf", sqr);

    e = exp(N);
    printf("%.10lf", e);

    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -lm -o program");
    

    return 0;
}

