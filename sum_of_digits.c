#include <stdio.h>
int sumOfDigits(int);

int main(void) {
    int N, result;

    scanf("%d", &N);

    result = sumOfDigits(N);

    printf("%d\n", result);

    return 0;
}

int sumOfDigits(int N) {
    int reminder;

    reminder = N % 10;

    if (N < 10) {
        return reminder;
    } else {
        return reminder + sumOfDigits((N - reminder) / 10);
    }

}
