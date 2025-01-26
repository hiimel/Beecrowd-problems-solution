//Link: https://judge.beecrowd.com/en/problems/view/1008

#include <stdio.h>
int main() {
    int employee_num, Work_hours;
    float Rate_of_hours, salary;

    scanf("%d", &employee_num);
    scanf("%d", &Work_hours);
    scanf("%f", &Rate_of_hours);

    salary = Work_hours * Rate_of_hours;

    printf("NUMBER = %d\n", employee_num);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
