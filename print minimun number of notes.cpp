#include <stdio.h>

int main() {
    int amount, notes = 0;
    
    printf("Enter the amount: ");
    scanf("%d", &amount);
    
    notes += amount / 500;
    amount %= 500;
    
    notes += amount / 100;
    amount %= 100;
    
    notes += amount / 50;
    amount %= 50;
    
    notes += amount / 20;
    amount %= 20;
    
    notes += amount / 10;
    amount %= 10;
    
    notes += amount / 5;
    amount %= 5;
    
    notes += amount / 2;
    amount %= 2;
    
    notes += amount / 1;
    
    printf("The minimum number of notes required is: %d", notes);
    
    return 0;
}
