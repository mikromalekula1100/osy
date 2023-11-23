#include "../include/firstFunctions.h"


int GCF(int firstNumber, int secondNumber){

    if(firstNumber < secondNumber){

        swap(&firstNumber, &secondNumber);
    }

    while(secondNumber != 0){

        firstNumber %= secondNumber;

        swap(&firstNumber, &secondNumber);
    }
   
    return firstNumber;
}

float calculatingE(int x){
    
    return -pow((1 + 1.0/x), x); 
}



