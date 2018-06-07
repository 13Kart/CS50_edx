// Mario's pyramid less comfortable

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt an user for a half-pyramid's height, a non negative integer no greater than 23.
    int n;
    int i;
    do
    {
        n = get_int("Height of half-pyramid: ");
    }
    while (n < 0 || n > 23);
    // Print out that many rows.
    for (i = 0; i < n; i++)
    {
        // Print out that many columns.
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
