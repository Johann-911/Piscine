#include "print_number.h"
#include "ft_strlen.h"
#include <unistd.h>

void print_number(int num, t_entry *entries, int size)
{
    int i;

    // 
    for (i = 0; i < size; i++)
    {
        if (entries[i].number == num)
        {
            // 
            if (num == 100)
                write(1, "one ", 4);

            write(1, entries[i].word, ft_strlen(entries[i].word));
            return;
        }
    }

    // Step 2: Handle two-digit numbers (21-99)
    if (num >= 21 && num <= 99)
    {
        int tens = (num / 10) * 10;
        int ones = num % 10;

        for (i = 0; i < size; i++)
        {
            if (entries[i].number == tens)
            {
                write(1, entries[i].word, ft_strlen(entries[i].word));
                break;
            }
        }

        if (ones != 0)
        {
            write(1, " ", 1);
            for (i = 0; i < size; i++)
            {
                if (entries[i].number == ones)
                {
                    write(1, entries[i].word, ft_strlen(entries[i].word));
                    break;
                }
            }
        }
        return; // 
    }

    // Step 3: Handle hundreds (100-999)
    if (num >= 100 && num < 1000)
    {
        int hundreds = num / 100;
        int remainder = num % 100;

        if (hundreds == 1)
            write(1, "one ", 4);
        else
        {
            for (i = 0; i < size; i++)
            {
                if (entries[i].number == hundreds)
                {
                    write(1, entries[i].word, ft_strlen(entries[i].word));
                    write(1, " ", 1);
                    break;
                }
            }
        }

        write(1, "hundred", 7);

        if (remainder != 0)
        {
            write(1, " ", 1);
            print_number(remainder, entries, size);
        }

        return; 
    }

    
    int scales[] = {1000000000, 1000000, 1000};  
    char *scale_words[] = {" billion", " million", " thousand"};

    for (int s = 0; s < 3; s++)
    {
        if (num >= scales[s])
        {
            int leading = num / scales[s];
            int remainder = num % scales[s];

            if (leading == 1)
                write(1, "one ", 4);
            else
                print_number(leading, entries, size);

            write(1, scale_words[s], ft_strlen(scale_words[s]));

            if (remainder != 0)
            {
                write(1, " ", 1);
                print_number(remainder, entries, size);
            }

            return;
        }
    }

    write(1, "Dict Error\n", 11);
}