#include<stdio.h>

int main(){
    double R, pi = 3.14159;
    float volume;
    scanf("%lf", &R);
    volume = (4.0/3.0)*pi*(R*R*R);
    printf("VOLUME = %.3f\n", volume);

    return 0;

}
