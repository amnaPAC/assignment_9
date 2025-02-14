#include <stdio.h>

void checkWithdrawalEligibility(float balance, float withdrawalAmount) {
    if (balance >= withdrawalAmount) {
        if (withdrawalAmount > 10000) {
            char permit;
            printf("Do you have a special withdrawal permit? (Y/N): ");
            scanf(" %c", &permit);
            if (permit == 'Y' || permit == 'y') {
                printf("Withdrawal approved. Please collect your cash.\n");
            } else {
                printf("Withdrawal denied. Special permit required for amounts over 10,000.\n");
            }
        } else {
            printf("Withdrawal approved. Please collect your cash.\n");
        }
    } else {
        printf("Insufficient balance. Withdrawal denied.\n");
    }
}

int main() {
    float balance, withdrawalAmount;
    
    printf("Enter account balance: ");
    scanf("%f", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawalAmount);
    
    checkWithdrawalEligibility(balance, withdrawalAmount);
    
    return 0;
}
