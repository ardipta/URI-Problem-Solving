#include<stdio.h>
int main(){
    int totalDistance;
    double fuelSpend, avgConsumption;
    scanf("%d", &totalDistance);
    scanf("%lf", &fuelSpend);
    avgConsumption = totalDistance/fuelSpend;
    printf("%.3f km/l\n", avgConsumption);
    return 0;
}
