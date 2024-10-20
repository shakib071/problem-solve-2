#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int digits[N];
    
    for (int i = 0; i < N; i++) {
        char inputDigit;
        scanf(" %c", &inputDigit); 
        digits[i] = inputDigit - '0'; 
    }

    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += digits[i];
    }

    printf("%d", sum);

    return 0;
}
