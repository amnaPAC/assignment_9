#include <stdio.h>

void calculateFinalAmount(float amount, char membership) {
    float discount = 0;
    
    if (amount > 2000) {
        if (membership == 'Y' || membership == 'y') {
            discount = amount * 0.20;
        } else {
            discount = amount * 0.10;
        }
    }
    
    float finalAmount = amount - discount;
    printf("Final amount after discount: %.2f PKR\n", finalAmount);
}

int main() {
    float amount;
    char membership;
    
    printf("Enter purchase amount: ");
    scanf("%f", &amount);
    printf("Are you a member? (Y/N): ");
    scanf(" %c", &membership);
    
    calculateFinalAmount(amount, membership);
    
    return 0;
}
