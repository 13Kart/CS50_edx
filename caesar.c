// Caesar- program that encrypts messages.

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Checking if user gave a key.
    string p;
    if (argc == 2)
    {
        // Prompt user for a text.
        p = get_string("plaintext: ");
    }
    else
    {
        // Showing an error.
        printf("ERROR\n");
        return 1;
    }
    // Change key into int.
    int key = atoi(argv[1]);
    if (key > 25)
    {
        key = key % 26;
    }
    printf("ciphertext: ");
    // Encrypting text.
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        int c = p[i] + key;
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
    printf("\n");
    return 0;
}