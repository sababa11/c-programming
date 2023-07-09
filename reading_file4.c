#include <stdio.h>

int main(void) {
    int N=0, max_index=0;
    double num, max_value=0.0;

    FILE *ifile;

    ifile = fopen("gradeComparison.txt", "r");

    while (fscanf(ifile, "%lf", &num) != EOF) {
        if (N==0) {
            max_value = num;
            max_index = 0;
        }
        
        if (max_value < num) {
            max_index = N;
        }
        N++;
    }

    fclose(ifile);

    if (max_index != 0) {
        printf("No %d", max_index + 1);
    } else {
        printf("Yes");
    }
    

    return 0;
}