#ifndef PRINT_NUMBER_H
#define PRINT_NUMBER_H

#include "parse_dict.h"  // it is needed because `t_entry` is used
#include "ft_strlen.h"   // it is needed because `print_number.c` uses `ft_strlen()`

void print_number(int num, t_entry *entries, int size);

#endif