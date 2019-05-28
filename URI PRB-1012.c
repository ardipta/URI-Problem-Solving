#include<stdio.h>

int main(){
 float A, B, C,
 triangle, circle, trapezium, square, rectangle;

 scanf("%f %f %f", &A, &B, &C);

 triangle    = (A*C)/2;
 circle    = 3.14159*(C*C);
 trapezium   = ((A+B)*C)/2;
 square   = B*B;
 rectangle    = A*B;

 printf("TRIANGULO: %.3f\n", triangle);
 printf("CIRCULO: %.3f\n", circle);
 printf("TRAPEZIO: %.3f\n", trapezium);
 printf("QUADRADO: %.3f\n", square);
 printf("RETANGULO: %.3f\n", rectangle);

return 0;
}
