#include "../include/supportFunctions.h"

int factorial(int n)
{   
    int rezult = 1; 
    for(int i = 1; i <= n; ++i){
        rezult *= i;
    }
    return rezult;

}

void swap(int *firstNumber, int *secondNumber)
{
    int buffer = *firstNumber;

    *firstNumber = *secondNumber;

    *secondNumber = buffer;
}