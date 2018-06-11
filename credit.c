// Credit

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Prompt an user for credit card number.
    long long num;
    do
    {
        num = get_long_long("Number: ");
    }
    while (num < 0);
    // Break number into digits.
    int dig16 = num % 10;
    long long num1 = num / 10;
    int dig15 = num1 % 10;
    num1 = num1 / 10;
    int dig14 = num1 % 10;
    num1 = num1 / 10;
    int dig13 = num1 % 10;
    num1 = num1 / 10;
    int dig12 = num1 % 10;
    num1 = num1 / 10;
    int dig11 = num1 % 10;
    num1 = num1 / 10;
    int dig10 = num1 % 10;
    num1 = num1 / 10;
    int dig09 = num1 % 10;
    num1 = num1 / 10;
    int dig08 = num1 % 10;
    num1 = num1 / 10;
    int dig07 = num1 % 10;
    num1 = num1 / 10;
    int dig06 = num1 % 10;
    num1 = num1 / 10;
    int dig05 = num1 % 10;
    num1 = num1 / 10;
    int dig04 = num1 % 10;
    num1 = num1 / 10;
    int dig03 = num1 % 10;
    num1 = num1 / 10;
    int dig02 = num1 % 10;
    num1 = num1 / 10;
    int dig01 = num1 % 10;
    // Preparing for condition 0.
    //dig15
    if (2 * dig15 > 9)
    {
        dig15 = (2 * dig15 % 10) + (2 * dig15 / 10 % 10);
    }
    else
    {
        dig15 = 2 * dig15;
    }
    //dig13
    if (2 * dig13 > 9)
    {
        dig13 = (2 * dig13 % 10) + (2 * dig13 / 10 % 10);
    }
    else
    {
        dig13 = 2 * dig13;
    }
    //dig11
    if (2 * dig11 > 9)
    {
        dig11 = (2 * dig11 % 10) + (2 * dig11 / 10 % 10);
    }
    else
    {
        dig11 = 2 * dig11;
    }
    //dig09
    if (2 * dig09 > 9)
    {
        dig09 = (2 * dig09 % 10) + (2 * dig09 / 10 % 10);
    }
    else
    {
        dig09 = 2 * dig09;
    }
    //dig07
    if (2 * dig07 > 9)
    {
        dig07 = (2 * dig07 % 10) + (2 * dig07 / 10 % 10);
    }
    else
    {
        dig07 = 2 * dig07;
    }
    //dig05
    if (2 * dig05 > 9)
    {
        dig05 = (2 * dig05 % 10) + (2 * dig05 / 10 % 10);
    }
    else
    {
        dig05 = 2 * dig05;
    }
    //dig03
    if (2 * dig03 > 9)
    {
        dig03 = (2 * dig03 % 10) + (2 * dig03 / 10 % 10);
    }
    else
    {
        dig03 = 2 * dig03;
    }
    //dig01
    if (2 * dig01 > 9)
    {
        dig01 = (2 * dig01 % 10) + (2 * dig01 / 10 % 10);
    }
    else
    {
        dig01 = 2 * dig01;
    }
    // Check condition 0 + 1.
    int x = (dig16 + dig15 + dig14 + dig13 + dig12 + dig11 + dig10 + dig09 + dig08 + dig07 + dig06 + dig05 + dig04 + dig03 + dig02
+ dig01) % 10;

    // Last codition.
    if (x == 0)
    {
        if (((340000000000000 <= num) && (num < 350000000000000)) || ((370000000000000 <= num) && (num < 380000000000000)))
        {
            printf("AMEX\n");
        }
        else if ((5100000000000000 <= num) && (num < 5600000000000000))
        {
            printf("MASTERCARD\n");
        }
        else if (((4000000000000000 <= num) && (num < 5000000000000000)) || ((4000000000000 <= num) && (num < 4000000000000)))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
