// Cash less comfortable

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Prompt an user for how much change is owed, a non negative integer.
    float n;
    do
    {
        n = get_float("Change owed: ");
    }
    while (n < 0);
    int m = round(n * 100);

    // Check how many 25c.
    double i = m / 25;
    i = floor(i);

    // Check how many 10c.
    double j = (m - 25 * i) / 10;
    j = floor(j);

    // Check how many 5c.
    double k = (m - 25 * i - 10 * j) / 5;
    k = floor(k);

    // Check how many 1c.
    double l = (m - 25 * i - 10 * j - 5 * k) / 1;
    l = floor(l);

    // Print how many coins
    printf("%.0f\n", i + j + k + l);
}
