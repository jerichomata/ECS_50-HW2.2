# hw2.2
Division using bitwise operators

Intructions:

File to submit: div.c
    - compile with -Wall -Werror
    - print all int to 2 decimal places unless stated other
    - all inputs valid


1. div.c must implement division of (2) unsigned int
    a. name of executable div.out
    b. cannot use division in solution
    c. arguments accepted from command line
        - first arg = dividend
        - second arg = divisor
    d. prog display quotient and remainder after division
    e. must complete in Q(1) (constant) time
        - int is 32 bits long so the loop does that does the division should take no longer than 32 iterations
        - must do the division in base 2
            ** hint: use bitwise operators
            ** check to see how many times the divisor goes into the dividend for the numbers that contain fewer digits than the divisor
                EX: 30/15
                 - First check how many times does 15 go into 3
                 - Answer is 0
                 - Then check how many times 50 goes into 30
                 - answer is 2
                 - answer is 02 R 0 
