#include <stdio.h>

void checkHealthInsuranceEligibility(int age, char seriousIllness) {
    if (age > 18) {
        if (age > 45) {
            if (seriousIllness == 'Y' || seriousIllness == 'y') {
                printf("Person is not eligible for health insurance due to serious illness.\n");
            } else {
                printf("Person is eligible for health insurance.\n");
            }
        } else {
            printf("Person is eligible for health insurance.\n");
        }
    } else {
        printf("Person is not eligible for health insurance due to age restriction.\n");
    }
}

int main() {
    int age;
    char seriousIllness;
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    if (age > 45) {
        printf("Have you had any serious illness? (Y/N): ");
        scanf(" %c", &seriousIllness);
    } else {
        seriousIllness = 'N';
    }
    
    checkHealthInsuranceEligibility(age, seriousIllness);
    
    return 0;
}
