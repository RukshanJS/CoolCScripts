#include <stdio.h>

int main()
{
    int input_number, temp_num, temp_rev_num, remainder;
    int digit_count = 0;
    int reversed_number = 0;

    printf("Please enter a 4-digit number to get reversed\n");
    scanf("%d", &input_number);
    temp_num = input_number;
    temp_rev_num = input_number;

    while(temp_num != 0)
    {
        temp_num /= 10;
        digit_count++;
    }

    if (digit_count == 4)
    {
        while (temp_rev_num != 0)
        {
            remainder = temp_rev_num % 10;
            reversed_number = reversed_number * 10 + remainder;
            temp_rev_num /= 10;
        }

        if (input_number == reversed_number)
        {
            printf("This is a palindrome number");
        }

        else
        {
            printf("The reversed number is %d", reversed_number);
        }

    }

    else
    {
        printf("Invalid number");
    }
    return 0;
}
