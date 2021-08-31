#include "my_mastermind.h"

bool is_digit(char* str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 48 && str[i] <= 55)
        {
            i += 1;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool is_valid(char* user_guess)
{
    if (my_strlen(user_guess) == CODE_SIZE)
    {

       if (is_digit(user_guess) == false)
       {
           return false;
       }
    }
    else
    {
        return false;
    }
    return true;
}

bool is_digit_input(char* str)
{
    int i = 0;
    while (str[i] != '\n')
    {
        if (str[i] >= 48 && str[i] <= 55)
        {
            i += 1;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool is_valid_input(char* user_guess)
{
    if (my_strlen(user_guess) == CODE_SIZE+1)
    {
       if (is_digit_input(user_guess) == false)
       {
           return false;
       }
    }
    else
    {
        return false;
    }
    return true;
}

int check_code(char* code, struct init_options *options)
{
    int misplaced_pieces = 0;
    int wellplaced_pieces = 0;
    int i = 0;
    int j = 0;
    char* secret_code = malloc(sizeof(char) * CODE_SIZE+1);

    if (options->c == true)
    {
        secret_code = options->code;
    }
    else
    {
        snprintf(secret_code, sizeof(char)*5, "%d", options->random_code);
    }
    while (code[i] != '\n')
    {
        if (code[i] == secret_code[i])
        {
            wellplaced_pieces += 1;
        }
        j = 0;
        while (secret_code[j] != '\0')
        {
            if (i != j && code[i] == secret_code[j])
            {
                misplaced_pieces += 1;
            }
            j += 1;                    
        }
        i += 1;
    }
    if (wellplaced_pieces == 4)
    {
        printf("Congratulations! You won!\n");
        return EXIT_SUCCESS;
    }
    else
    {
        printf("Well placed pieces: %d\n", wellplaced_pieces);
        printf("Misplaced pieces: %d\n", misplaced_pieces);
        return EXIT_FAILURE;
    }
}
