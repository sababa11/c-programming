#include <stdio.h>

void swap(int * i, int * j){
    int tmp = * i;
    * i = * j;
    * j = tmp;
}

int main(){
    //! showMemory(start=65520)
    double a = 42.98;
    double * addressOfA = &a;
    printf("At the address %p there is the value %.2lf\n",addressOfA,* addressOfA);
    char c = 'm';
    // assigning pointer addressOfC from value &c
    char * addressOfC = &c;
    char d = * addressOfC;
    * addressOfA = 32;
    // mainpulationg the data of the pointer
    * addressOfA = * addressOfA + 1; 
    //                     %pointer                       pointer,    inside of address of the pointrer
    printf("At the address %p there is the value %.2lf\n",addressOfA,* addressOfA);

    int i = 9;
    int j = 1;
    swap(&i,&j);
    printf("%d %d\n",i,j);

    int arr[3] = {15, 16, 17};
    printf("%p\n",arr);
    int * ptr = arr;
    * ptr = 2;       // * arr         0R  arr[0]
    * (ptr + 1) = 3; // * (arr + 1)   OR  arr[1]
    * (ptr + 2) = 5; // * (arr + 2)   OR  arr[2]

    return 0;
}
