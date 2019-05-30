#include<stdio.h>

int main(){
    int value, availableHundred,availableFifty,
    availableTwenty, availableTen, availableFive,
    availableTwo, availableOne, noteInHundred,
    noteInFifty, noteInTwenty, noteInTen,
    noteInFive, noteInTwo, noteInOne;
    scanf("%d", &value);

    noteInHundred = value/100;
    availableHundred = value - (noteInHundred*100);

    noteInFifty = availableHundred/50;
    availableFifty = availableHundred - (noteInFifty*50);

    noteInTwenty = availableFifty/20;
    availableTwenty = availableFifty - (noteInTwenty*20);

    noteInTen = availableTwenty/10;
    availableTen = availableTwenty - (noteInTen*10);

    noteInFive = availableTen/5;
    availableFive = availableTen - (noteInFive*5);

    noteInTwo = availableFive/2;
    availableTwo = availableFive - (noteInTwo*2);

    noteInOne = availableTwo/1;
    availableOne = availableTwo - (noteInOne*1);

    printf("%d nota(s) de R$ 100,00\n", noteInHundred);
    printf("%d nota(s) de R$ 50,00\n", noteInFifty);
    printf("%d nota(s) de R$ 20,00\n", noteInTwenty);
    printf("%d nota(s) de R$ 10,00\n", noteInTen);
    printf("%d nota(s) de R$ 5,00\n", noteInFive);
    printf("%d nota(s) de R$ 2,00\n", noteInTwo);
    printf("%d nota(s) de R$ 1,00\n", noteInOne);



    return 0;

}

