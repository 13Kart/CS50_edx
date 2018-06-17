// Vigenere- program that encrypts messages.

#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Checking if user gave a key.
    if (argc != 2)
    {
        // Showing an error.
        printf("ERROR\n");
        return 1;
    }
    string p;
    // Change key into string.
    string key = argv[1];
    int j;
    int m = strlen(key);
    for (j = 0; j < m; j++)
    {
        if (isalpha(key[j]) == 0)
        {
            // Showing an error.
            printf("ERROR\n");
            return 1;
        }
    }
    // Prompt user for a text.
    p = get_string("plaintext: ");
    printf("ciphertext: ");
    // Encrypting text.
    j = 0;
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        // Other signs.
        if (isalpha(p[i]) == 0)
        {
            printf("%c", p[i]);
        }
        else
        {
            // Finding a connection between a keyword and a plaintext.
            if (j >= m - 1 || i == 0)
            {
                j = 0;
            }
            else
            {
                j++;
            }
            int c = p[i] + toupper(key[j]) - 65;
            // Checking for A-Z.
            if (p[i] > 64 && p[i] < 91)
            {
                // Ensuring that it is still a letter.
                if (c > 90)
                {
                    printf("%c", c - 26);
                }
                else
                {
                    printf("%c", c);
                }
            }
            // Checking for a-z.
            else if (p[i] > 96 && p[i] < 123)
            {
                // Ensuring that it is still a letter.
                if (c > 122)
                {
                    printf("%c", c - 26);
                }
                else
                {
                    printf("%c", c);
                }
            }
            // Other signs.
            else
            {
                printf("%c", p[i]);
            }
        }
    }
    printf("\n");
    return 0;
}