# My_Mastermind

Simplified version of 'My Mastermind' game.



## SPECIFICATIONS

Write a program called `mastermind`; it will be an implementation of the famous game.

## NAME

`my_mastermind`

## SYNOPSIS

`my_mastermind [-ct]`

## DESCRIPTION

---
`Mastermind` is a `game` composed of 8 pieces of different colors.
A `secret code` is then composed of `4` distinct pieces.

The player has `10 attempts` to find the secret code.
After each input, the game indicates to the player the number of well placed pieces and the number of misplaced pieces.

Pieces will be `'0' '1' '2' '3' '4' '5' '6' '7'`.

If the player finds the code, he wins, and the game stops.
A misplaced piece is a piece that is present in the secret code butthat is not in a good position.

You must read the player's input from the standard input.

Your program will also receive the following parameters:
`-c` [CODE]: specifies the secret code. If no code is specified, a random code will be generated.
`-t` [ATTEMPTS]: specifies the number of attempts; by default, the player has 10 attempts.

---

## INSTRUCTIONS TO PLAY

1. Type `make` on your terminal to compile
2. To play with a random code generated and 10 attempts: run `./my_mastermind` 
    - To generate your own 4 digits code: run `./my_mastermind -c 0123`
    - To choose the number of attempts: run `./my_mastermind -t 4`
    - Flag combination is accepted: run `./my_mastermind -c 0123 -t 4`
4. A non valid input will interrupt the game - run `./my_mastermind` to start again.
3. Have fun! :D
