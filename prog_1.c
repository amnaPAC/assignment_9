#include <stdio.h>

void checkEligibility(float math, float science) {
    if (math >= 50 && science >= 50) {
        printf("Student is eligible for admission.\n");
        if (math > 80 && science > 80) {
            printf("Student qualifies for a scholarship.\n");
        }
    } else {
        printf("Student is not eligible for admission.\n");
    }
}

int main() {
    float math, science;
    
    printf("Enter Math percentage: ");
    scanf("%f", &math);
    printf("Enter Science percentage: ");
    scanf("%f", &science);
    
    checkEligibility(math, science);
    
    return 0;
}