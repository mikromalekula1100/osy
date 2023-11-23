#include "../include/secondFunctions.h"



int GCF(int firstNumber, int secondNumber){

    int minNumber = (firstNumber < secondNumber) ? firstNumber : secondNumber;

    for(int currentNumber = minNumber; currentNumber > 0; --currentNumber){

        if(((firstNumber % currentNumber) + (secondNumber % currentNumber)) == 0){

            return currentNumber;
        }
    }
    printf("%d", 2);
    return 1;
}

double calculatingE(int x){

    double numberE = 1.0;
    for(int i = 1;i <= x; ++i){

        numberE += 1.0/(factorial(i));
    }
    printf("%d", 2);
    return (-numberE);
}



