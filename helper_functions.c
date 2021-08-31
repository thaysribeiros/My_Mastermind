#include "my_mastermind.h"

int random_number(int min, int max)
{
    int result = 0;
    int low_nbr = 0;
    int hi_nbr = 0;

    low_nbr = min;
    hi_nbr = max + 1;
    srand(time(NULL));
    result = (rand() % (hi_nbr-low_nbr)) + low_nbr;
    return result;
}

int my_strlen(char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len += 1;
    }
    return len;
}

int my_strcmp(char* str1, char* str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
    {
        i += 1;
    }
    return (str1[i]-str2[i]);
}

int number_of_attempts(struct init_options *options)
{
    if (options->t == true)
    {
        return options->attempts;
    }
    else
    {
        return 10;
    }
}
