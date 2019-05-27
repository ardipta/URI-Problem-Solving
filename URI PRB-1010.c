#include<stdio.h>

int main(){
    int codeOfProduct1, codeOfProduct2,
        unitOfProduct1, unitOfProduct2;
    double priceOfUnit1, priceOfUnit2, ValueToPay;
    scanf("%d %d %lf", &codeOfProduct1, &unitOfProduct1, &priceOfUnit1);
    scanf("%d %d %lf", &codeOfProduct2, &unitOfProduct2, &priceOfUnit2);

    ValueToPay = (unitOfProduct1*priceOfUnit1)+(unitOfProduct2*priceOfUnit2);
    printf("VALOR A PAGAR: R$ %.2f\n", ValueToPay);
    return 0;

}
