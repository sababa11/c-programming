#include <stdio.h>

void swap(int * i, int * j){
    int tmp = * i;
    * i = * j;
    * j = tmp;
}

int main(){
    //! showMemory(start=65520)
    double a = 42.98;
    double * addressOfA = &a; // initialization and assign
    
    double * addOfA; // only initialization
    addOfA = &a;     // only the assign action

    printf("At the address %p there is the value %.2lf\n",addressOfA,* addressOfA);
    char c = 'm';
    // assigning pointer addressOfC from value &c
    char * addressOfC = &c; 
    char d = * addressOfC; // char d gets what is stored inside of addressOfC
    * addressOfA = 32;     // "double a" gets value 32 | in another words we dereference the value of addressOfA
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
    // ptr == &arr[0]
    int * ptr = arr;
    * ptr = 2;       // * ptr         0R  ptr[0]
    * (ptr + 1) = 3; // * (ptr + 1)   OR  ptr[1]
    * (ptr + 2) = 5; // * (ptr + 2)   OR  ptr[2]
    // ptr++ | this way we incriment pointer to next slot (arr[1])

    // --------------------------------------------------------------
    double totalWet, totalDry, ratio;

    double wet[2];
    double dry[3];
    double * cookie[2] = {wet,dry};
    
    scanf("%lf%lf", &wet[0], &wet[1]);
    scanf("%lf%lf%lf", &dry[0], &dry[1], &dry[2]);

    totalWet = cookie[0][0] + cookie[0][1];

    printf("Total amount of wet ingredients: %.2lf grams.\n", totalWet);
    
    totalDry = cookie[1][0] + cookie[1][1] + cookie[1][2];

    printf("Total amount of dry ingredients: %.2lf grams.\n", totalDry);
    ratio = totalDry/totalWet;
    printf("Ratio of wet to dry ingredients: %.2lf.\n", ratio);

    cookie[0][0] = totalWet / 2;
    cookie[0][1] = totalWet / 2;
    
    printf("New water amount: %.2lf grams, new oil amount: %.2lf grams.\n", wet[0], wet[1]);

    return 0;
}
