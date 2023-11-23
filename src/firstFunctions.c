#include "../include/firstFunctions.h"


int GCF(int firstNumber, int secondNumber){

    if(firstNumber < secondNumber){

        swap(&firstNumber, &secondNumber);
    }

    while(secondNumber != 0){

        firstNumber %= secondNumber;

        swap(&firstNumber, &secondNumber);
    }
    printf("%d", 1);
    return firstNumber;
}

float calculatingE(int x){
    printf("%d", 1);
    return -pow((1 + 1.0/x), x); 
}



