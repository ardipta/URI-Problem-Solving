#include<stdio.h>

int main(){

    int time, avgSpeed; //here time in hours
    double mileage = 12.0, fuelNeed;                   //avg speed in km/hour
                                      //mileage in km/Liter
    scanf("%d", &time);
    scanf("%d", &avgSpeed);
    fuelNeed = (avgSpeed/mileage)*time;
    printf("%.3f\n", fuelNeed);

    return 0;

}
