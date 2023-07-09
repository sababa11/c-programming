#include <stdio.h>

int main(void) {
    int N, i, number;
    double result = 0.0;
    FILE *ifile;

    ifile = fopen("studentGrades.txt", "r");

    fscanf(ifile, "%d", &N);

    //printf("There are %d numbers in the file.\n", N);

    for (i=0; i<N; i++) {
        fscanf(ifile, "%d", &number);
        result += number;
        //printf("%d from the file.\n", number);
    }
    result = result / N;

    fclose(ifile);

    printf("%.2lf", result);

    return 0;
}