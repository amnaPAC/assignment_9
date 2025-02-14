#include <stdio.h>

void checkBloodDonationEligibility(int age, float weight) {
    if (age >= 18 && age <= 65) {
        if (weight >= 50) {
            printf("Person is eligible to donate blood.\n");
        } else {
            printf("Person is not eligible to donate blood due to insufficient weight.\n");
        }
    } else {
        printf("Person is not eligible to donate blood due to age restrictions.\n");
    }
}

int main() {
    int age;
    float weight;
    
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    
    checkBloodDonationEligibility(age, weight);
    
    return 0;
}