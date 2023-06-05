#include <stdio.h>
//#include <math.h>
int main(void) {
    int i, ingridients;
    printf("Enter amount of ingridients\n");
    scanf("%d", &ingridients);
    double price[ingridients], weight[ingridients], total = 0.0;
    
    printf("Enter %d price\n", ingridients);
    for (i=0; i<ingridients; i++) {
        scanf("%lf", &price[i]);
    }

    printf("Enter %d weights\n", ingridients);
    for (i=0; i<ingridients; i++) {
        scanf("%lf", &weight[i]);
    }
    
    for (i=0; i<ingridients; i++) {
        total = total + (price[i] * weight[i]);
    }
    printf("%.6lf\n", total);
    return 0;
}
