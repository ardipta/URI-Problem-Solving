#include<stdio.h>
#include<math.h>

int main(){
    double x1, x2, y1, y2, xAxes,
    yAxes, value, distance;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    xAxes = (x2-x1);
    yAxes = (y2-y1);
    value = (xAxes * xAxes) + (yAxes * yAxes);
    distance = sqrt(value);
    printf("%.4f\n", distance);

    return 0;
}
