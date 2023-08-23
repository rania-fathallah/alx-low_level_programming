#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: String to be encoded
 * Return: Returns the encoded string
 */
char *leet(char *str)
{
    int index = 0;
    char leet[8] = {'O', 'L', 'E', 'A', 'T', 'a', 'e', 't'};
    char replace[8] = {'0', '1', '3', '4', '7', '4', '3', '7'};

    while (str[index])
    {
        int leet_index = 0;
        while (leet_index < 8)
        {
            if (str[index] == leet[leet_index])
            {
                str[index] = replace[leet_index];
                break;
            }
            leet_index++;
        }
        index++;
    }

    return (str);
}
