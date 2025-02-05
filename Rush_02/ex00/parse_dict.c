#include "parse_dict.h"
#include "ft_strdup.h"
#include <stdlib.h>

t_entry *parse_dictionary(char *dict, int *size)
{
    int i = 0, j, num;
    char *word;
    t_entry *entries = malloc(sizeof(t_entry) * 100); // Allocate memory for 100 entries

    if (!entries)
        return (NULL);

    while (dict[i])
    {
        if (dict[i] >= '0' && dict[i] <= '9') // Detect numbers
        {
            num = 0;
            while (dict[i] >= '0' && dict[i] <= '9') // Convert number
                num = num * 10 + (dict[i++] - '0');

            while (dict[i] == ' ' || dict[i] == ':') // Skip spaces and colon
                i++;

            j = i;
            while (dict[i] && dict[i] != '\n') // Find end of word
                i++;

            
            word = malloc((i - j + 1) * sizeof(char));
            if (!word)
                return (NULL);

            int k;
            for (k = 0; k < i - j; k++) 
                word[k] = dict[j + k];
            word[k] = '\0'; 

            entries[*size].number = num;
            entries[*size].word = word;
            (*size)++;
        }
        if (dict[i])
            i++;
    }

    return (entries);
}