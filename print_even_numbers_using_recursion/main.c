/***************************************************************************************
*    Title: Print Even Numbers From 1 to 100
*    Author: Rukshan J. Senanayaka
*    Date: 09/25/2020
*    Code version: 1.0
*    Availability: https://github.com/RukshanJS/cool-c-scripts
*
***************************************************************************************/

#include <stdio.h>

int printEven(int x); //function prototype

int main() {
    printEven(2); //function call
    return 0;
}

int printEven(int x){ //function definition
    printf("%d\n", x);

    if (x > 98) { //base case
        return x;
    }
    else{ //recursive case
        return printEven(x + 2); //recursive function call
    }
}
