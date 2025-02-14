#include <stdio.h>

float calculateFuelCost(float distance, float fuelAverage, float fuelPrice) {
    return (distance / fuelAverage) * fuelPrice;
}

float remainingBalance(float amount) {
    float fed = amount * 0.195;
    float serviceCharges = amount * 0.10;
    return amount - (fed + serviceCharges);
}

float convertCurrency(float amount, char currencyType, float exchangeRate) {
    return amount * exchangeRate;
}

void showLoadSheddingSchedule(char city[]) {
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("Load Shedding Schedule for %s:\n", city);
    for (int i = 0; i < 7; i++) {
        printf("%s: 6 AM - 8 AM, 6 PM - 8 PM\n", days[i]);
    }
}

float calculateTrainFare(char class[], float distance) {
    float rate;
    if (strcmp(class, "Economy") == 0) {
        rate = 5;
    } else if (strcmp(class, "Business") == 0) {
        rate = 10;
    } else if (strcmp(class, "First") == 0) {
        rate = 15;
    } else {
        printf("Invalid class selection.\n");
        return -1;
    }
    return distance * rate;
}

float calculateElectricityBill(int units) {
    float bill = 0;
    if (units > 300) {
        bill = (units - 300) * 10 + 100 * 8 + 100 * 5;
    } else if (units > 200) {
        bill = (units - 200) * 8 + 100 * 5;
    } else if (units > 100) {
        bill = (units - 100) * 5;
    }
    return bill;
}

float calculateIncomeTax(float income) {
    float tax = 0;
    if (income > 1000000) {
        tax = (income - 1000000) * 0.15 + 500000 * 0.10 + 250000 * 0.05;
    } else if (income > 500000) {
        tax = (income - 500000) * 0.10 + 250000 * 0.05;
    } else if (income > 250000) {
        tax = (income - 250000) * 0.05;
    }
    return tax;
}

char calculateGrade(float marks1, float marks2, float marks3) {
    float average = (marks1 + marks2 + marks3) / 3;
    if (average < 50) {
        return 'F';
    } else if (average > 75) {
        return 'A';
    } else {
        return 'B';
    }
}

int checkLoanEligibility(float income, char hasExistingLoan, char hasOverduePayments) {
    if (income < 30000) {
        return 0;
    }
    if (hasExistingLoan == 'Y' && hasOverduePayments == 'Y') {
        return 0;
    }
    return 1;
}

int main() {
    float marks1, marks2, marks3;
    printf("Enter marks for three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);
    char grade = calculateGrade(marks1, marks2, marks3);
    if (grade == 'F') {
        printf("Student has failed.\n");
    } else {
        printf("Student passed with grade: %c\n", grade);
    }
    
    float income;
    char hasExistingLoan, hasOverduePayments;
    printf("Enter monthly income: ");
    scanf("%f", &income);
    printf("Do you have an existing loan? (Y/N): ");
    scanf(" %c", &hasExistingLoan);
    if (hasExistingLoan == 'Y') {
        printf("Do you have overdue payments? (Y/N): ");
        scanf(" %c", &hasOverduePayments);
    }
    if (checkLoanEligibility(income, hasExistingLoan, hasOverduePayments)) {
        printf("Loan Approved.\n");
    } else {
        printf("Loan Denied.\n");
    }
    
    return 0;
}
