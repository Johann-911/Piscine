#include "print_large_number.h"
#include "print_number.h"
#include "parse_dict.h"
#include "ft_strlen.h"
#include "ft_atoi.h"
#include <unistd.h>

void print_large_number(char *num_str, t_entry *entries, int size)
{
    int i = 0;

    
    while (num_str[i])
    {
        if (num_str[i] < '0' || num_str[i] > '9')
        {
            write(1, "Error\n", 6);
            return;
        }
        i++;
    }

    
    if (i == 1 && num_str[0] == '0')
    {
        print_number(0, entries, size);
        return;
    }

   
    int num_len = i;
    int group_size = num_len % 3;

    if (group_size == 0)
        group_size = 3;

    i = 0;
    while (num_str[i])
    {
        char group[4] = {0};
        int j = 0;

        while (j < group_size && num_str[i])
        {
            group[j] = num_str[i];
            i++;
            j++;
        }
        group[j] = '\0';

       
        int group_number = ft_atoi(group);

     
        if (group_number != 0)
            print_number(group_number, entries, size);

        
        int remaining_digits = num_len - i;
        if (remaining_digits >= 3)
        {
            int scale_index = (remaining_digits / 3) - 1;
            char *scale_words[] = {"thousand", "million", "billion", "trillion", "quadrillion", "quintillion"};
            if (scale_index < 6)
            {
                write(1, " ", 1);
                write(1, scale_words[scale_index], ft_strlen(scale_words[scale_index]));
            }
        }

        group_size = 3;

        if (num_str[i] && group_number != 0)
            write(1, " ", 1);
    }
}