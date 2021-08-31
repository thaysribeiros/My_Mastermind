#include "my_mastermind.h"

int main(int ac, char** av)
{
   struct init_options options;
   int valid_option = init_option(ac, av, &options);
   int round = 0;
   char code[128];
   int attempts;

   if (valid_option == EXIT_SUCCESS)
   {
            attempts = number_of_attempts(&options);
            print_first_round(round, &options, attempts);
            while (1)
            {
                read(0, code, sizeof(code));
                round += 1;
                if (is_valid_input(code) == true)
                {
                    if (check_code(code, &options) == EXIT_SUCCESS)
                    {
                        return 0;
                    }
                }
                else
                {
                    printf("Code should be 4 digits in range [0 to 7]\nPlease, start again!\n");
                    return -1; 
                }
                if (round >= attempts)
                {
                    printf("KO! Game over!\n");
                    print_secret_code(&options);
                    return 0;
                }
                print_rounds(round, &options);
            }
   }
   else
   {
        printf("My_Mastermind accepts only: [-c] + a code of 4 digits in range [0 to 7] + [-t] + a number bigger than zero.\nExample: ./my_mastermind -c 1234 -t 8\n");
   }
   return 0;
}
