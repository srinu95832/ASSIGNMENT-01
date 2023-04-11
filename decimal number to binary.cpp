#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    
    printf("The binary is: ");
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    
    return 0;
}
