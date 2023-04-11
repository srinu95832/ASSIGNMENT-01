#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (int i = num; i > 0; i /= 10) {
        digit = i % 10;
        sum += digit;
    }
    
    printf("The sum of digits of the given number is: %d", sum);
    
    return 0;
}
