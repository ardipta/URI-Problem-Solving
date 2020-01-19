#include<stdio.h>
int main(){
    int num, hour, minute, second;
    scanf("%d", &num);
    hour = num/3600;
    minute = num % 3600/60;
    second = num % 60;
    printf("%d:%d:%d\n", hour, minute, second);
    return 0;
}
