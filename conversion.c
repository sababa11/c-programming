#include <stdio.h>

double convertTemp(double value) {
    double result;
    result = 32 + 1.8 * value;
    return result;
}

double convertLen(double value) {
    double result;
    result = 3.2808 * value;
    return result;
}

double convertWeight(double value) {
    double result;
    result = 0.002205 * value;
    return result;
}


int main(void) {
    int num_conv, i;
    char unit;
    double value, result;

    scanf("%d", &num_conv);
    for (i=0; i<num_conv; i++) {
        scanf("%lf %c", &value, &unit);
        //printf("value: %.6lf, unit: %c\n", value, unit);
        if (unit == 'c') {
            result = convertTemp(value);
            printf("%.6lf f\n", result);
        }
        else if (unit == 'm') {
            result = convertLen(value);
            printf("%.6lf ft\n", result);
        }
        else if (unit == 'g') {
            result = convertWeight(value);
            printf("%.6lf lbs\n", result);
        }
    }

    return 0;
}
