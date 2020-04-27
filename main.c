#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    //variables
    char number_string[1500];
    int input_number = 0;
    int temp_power = 0;

    //take number of rows as input.
    scanf("%d",&input_number);

    //print the pattern.
    for (int i=input_number-1;i>=0;i--)
    {
        //print the spaces before each number (not for the first number).
        for (int x=0;x<=abs(input_number-i-2);x++)
        {
            if (i!=input_number-1)
            {
                printf(" ");
            }
        }

        temp_power = lround(pow(11,i)); //rounding to nearest integer by using rounding functions.
        sprintf(number_string,"%d",temp_power); //add each number to a string buffer.

        //print each digit of the current number, with a space between each digit.
        for (int j=0;j<=strlen(number_string);j++)
        {
            printf("%c ",number_string[j]);
        }
        printf("\n"); //go to next line for next number.
    }

    return 0;
}
