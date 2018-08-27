// Helper functions for music

#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int x = atoi(&fraction[0]);
    int y = atoi(&fraction[2]);
    int duration = (x * 8) / y;
    //int duration = round((x / y) * 8.0);
    return duration;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // A4 = 440 Hz
    // frequency = round(pow(2, n / 12) * 440);
    // For A0 to A8
    int m = strlen(note);
    int n = atoi(&note[m - 1]);
    // A0 to A8 module
    int A = (n - 4) * 12;
    // For B0 to B8
    if (note[0] == 'B')
    {
        A = A + 2;
    }
    // For C0 to C8
    if (note[0] == 'C')
    {
        A = A - 9;
    }
    // For D0 to D8
    if (note[0] == 'D')
    {
        A = A - 7;
    }
    // For E0 to E8
    if (note[0] == 'E')
    {
        A = A - 5;
    }
    // For F0 to F8
    if (note[0] == 'F')
    {
        A = A - 4;
    }
    // For G0 to G8
    if (note[0] == 'G')
    {
        A = A - 2;
    }
    // For #
    if (note[1] == '#')
    {
        A = A + 1;
    }
    else if (note[1] == 'b')
    {
        A = A - 1;
    }
    int frequency = round(pow(2, A / 12.0) * 440);
    return frequency;
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    //if (s[0] == '\r' || s[0] == '\n' || s[0] == "")
    if (s[0] == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}
