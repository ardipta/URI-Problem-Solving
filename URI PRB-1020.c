#include<stdio.h>
int main(){
    int ageInDays, year, month, day;
    scanf("%d", &ageInDays);

    year = ageInDays/365;
    month = ageInDays % 365/30;
    day = ageInDays % 365 % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
    return 0;
}
