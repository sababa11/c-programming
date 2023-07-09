#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int integer;
    double doub, result;

    if (argc == 3) {
        integer = atoi(argv[1]);
        doub = atof(argv[2]);
        result = integer * doub;
        printf("%d plants for %.2lf dollars each cost %.2lf dollars", integer, doub, result);
    } else {
        printf("Invalid input.");
    }
    
    return 0;
}   