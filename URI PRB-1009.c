#include<stdio.h>

int main(){
    char sellerName;
    double fixedSalary, salesTotal, totalSalary;
    scanf("%s", &sellerName);
    scanf("%lf", &fixedSalary);
    scanf("%lf", &salesTotal);
    totalSalary = fixedSalary + (salesTotal* 0.15);
    printf("TOTAL = R$ %.2f\n", totalSalary);
    return 0;
}
