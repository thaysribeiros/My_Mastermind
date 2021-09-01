#ifndef MY_MASTERMIND_H
#define MY_MASTERMIND_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define CODE_SIZE 4

struct init_options
{
    bool c;
    bool t;
    char* code;
    int attempts;
    int random_code;
};

int init_option(int ac, char** av, struct init_options *options);
int random_number(int min, int max);
int my_strlen(char* str);
int my_strcmp(char* str1, char* str);
bool is_valid(char* user_guess);
bool is_digit(char* str);
bool is_valid_input(char* user_guess);
bool is_digit_input(char* str);
int number_of_attempts(struct init_options *options);
void print_first_round(int round, int attempts);
int check_code(char* code, struct init_options *options);
void print_rounds(int round);
void print_secret_code(struct init_options *options);
//void print_bool(bool option); //for debugging purposes

#endif
