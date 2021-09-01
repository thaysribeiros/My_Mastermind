#include "my_mastermind.h"

int init_option(int ac, char** av, struct init_options *options)
{
    int i = 1;
    options->c = false;
    options->t = false;
    options->code = 0;
    options->attempts = 0;
    options->random_code = random_number(1000, 7777);

    if (ac > 1 && ac < 6)
    {
        if (my_strcmp(av[i], "-c") != 0 && my_strcmp(av[i], "-t") != 0)
        {
            return -1;
        }
        while (i < ac)
        {
            if (my_strcmp(av[i], "-c") == 0 && av[i+1] != NULL)
            {
                options->c = true;
                if (is_valid(av[i+1]) == true)
                {
                    options->code = av[i+1];
                }
                else
                {
                    return -1;
                }
            }
            if (my_strcmp(av[i], "-t") == 0 && av[i+1] != NULL)
            {
                options->t = true;
                if (atoi(av[i+1]) > 0)
                {
                    options->attempts = atoi(av[i+1]);
                }
                else
                {
                    printf("Number of attemps must be a positive number\n");
                    return -1;
                }
            }
            if ((my_strcmp(av[i], "-c") == 0 && av[i+1] == NULL) || (my_strcmp(av[i], "-t") == 0 && av[i+1] == NULL))
            {
                return -1;
            }
            i += 1;
        }
        return 0;
    }
    else if (ac == 1)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
