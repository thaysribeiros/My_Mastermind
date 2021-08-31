# -*- Makefile -*-

CC = gcc
CFLAGS += -Wall -Wextra -Werror
LINKERFLAG = -lm
SOURCES = my_mastermind.c my_mastermind.h helper_functions.c init_option.c input_validation.c print_functions.c
OBJECTS = $(SOURCES: .c=.o)
TARGET = my_mastermind

$(TARGET) : $(OBJECTS)
	$(CC) $(FLAGS) -o $@ $^

.PHONY: clean

clean: 
	@rm -f $(TARGET) $(OBJECTS) core
