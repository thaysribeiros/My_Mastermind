#include "my_mastermind.h"

void print_first_round(int round, int attempts)
{
    printf("Will you find the secret code?\n");
    printf("You have %d attempts, good luck!\n", attempts);
    printf("---\n");
    printf("Round %d\n", round);
}

void print_rounds(int round)
{
    printf("---\n");
    printf("Round %d\n", round);
}

void print_secret_code(struct init_options *options)
{
    if (options->c == false)
    {
        printf("The secret code was: --> %d <--\nGood luck next time!\n", options->random_code);
    }
    else
    {
        printf("The secret code was: --> %s <--\nGood luck next time!\n", options->code);
    }
}

void print_bool(bool option)
{
    if (option == true)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
}
