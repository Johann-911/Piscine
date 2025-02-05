#ifndef PARSE_DICT_H
#define PARSE_DICT_H

typedef struct s_entry
{
    int number;
    char *word;
} t_entry;

t_entry *parse_dictionary(char *dict, int *size);

#endif