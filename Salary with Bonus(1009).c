//Link: https://judge.beecrowd.com/en/problems/view/1009

#include <stdio.h>
int main() {
    char sellerName[100];
    float fixedSalary, totalSales, totalSalary;

    scanf("%s", sellerName);
    scanf("%f", &fixedSalary);
    scanf("%f", &totalSales);

    totalSalary = fixedSalary + (totalSales * 0.15);

    printf("TOTAL = R$ %.2lf\n", totalSalary);

    return 0;
}

