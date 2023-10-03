#include "main.h"
#include <stdio.h>
int get_input(char *s)
{
    int input;
    puts(s);
    scanf("%d", &input);
    return input;
}