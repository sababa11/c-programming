#include <stdio.h>

int main(void) {
    int N=0, num, sum=0;

    FILE *ifile;

    ifile = fopen("my_third_file.txt", "r");

    while (fscanf(ifile, "%d", &num) != EOF) {
        printf("I read %d from the file. \n", num);
        N++;
        sum += num;
    }

    fclose(ifile);

    printf("There are %d numbers in the file. \n", N);
    printf("The average is %.2lf\n", (double) sum / N);

    return 0;
}