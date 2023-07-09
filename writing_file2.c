#include <stdio.h>

int main(void) {
    int last_grade = 0, num;
    char filename[] = "myGrades.txt";

    FILE *ofile;

    ofile = fopen(filename, "r");

    while (fscanf(ofile, "%d", &num) != EOF) {
        last_grade = num;
    }
    fclose(ofile);

    scanf("%d", &num);

    ofile = fopen(filename, "a");
    if (last_grade != num) {
        fprintf(ofile, " %d ", num);
    }
    fclose(ofile);

    ofile = fopen(filename, "r");
    while (fscanf(ofile, "%d", &num) != EOF) {
        printf("%d ", num);
    }
    fclose(ofile);

    return 0;

}