#include "print_large_number.h"
#include "ft_atoi.h"
#include "ft_strcmp.h"
#include "ft_strdup.h"
#include "read_file.h"
#include "parse_dict.h"
#include <unistd.h>
#include <stdlib.h>  

int is_valid_number(char *str)
{
    int i = 0;
    if (!str[i]) return (0);
    if (str[i] == '-') return (-1);

    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9') return (0);
        i++;
    }
    return (1);
}


void free_entries(t_entry *entries, int size)
{
    for (int i = 0; i < size; i++)
    {
        free(entries[i].word);  
    }
    free(entries);  
}

int main(int argc, char **argv)
{
    char *dict;
    t_entry *entries;
    int size = 0;

    if (argc < 2 || argc > 3)
    {
        write(1, "Error\n", 6);
        return (1);
    }

    int validation_result = is_valid_number(argv[argc - 1]);

    if (validation_result == -1)
    {
        write(1, "Error\n", 6);
        return (1);
    }
    else if (validation_result == 0)
    {
        write(1, "Error", 5);
        return (1);
    }

    char *number = argv[argc - 1];

    if (argc == 3)
        dict = read_file(argv[1]);
    else
        dict = read_file("numbers.dict");

    if (!dict)
    {
        write(1, "Dict Error\n", 11);
        return (1);
    }

    entries = parse_dictionary(dict, &size);
    free(dict);  

    if (!entries)
    {
        write(1, "Dict Error\n", 11);
        return (1);
    }

    print_large_number(number, entries, size);

    free_entries(entries, size);  
    return (0);
}