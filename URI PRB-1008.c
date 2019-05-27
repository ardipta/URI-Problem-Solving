#include<stdio.h>

int main(){
    int employeeNumber, workingHour;
    float salaryPerHour, salary;

    scanf("%d", &employeeNumber);
    scanf("%d", &workingHour);
    scanf("%f", &salaryPerHour);
    salary = workingHour*salaryPerHour;
    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;


}

