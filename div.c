#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convBten(char *n)
{
    char *num;
    unsigned int convInt;
    unsigned long conv = strtol(n, &num, 10);
    convInt = conv;
    return convInt;
}

void convBtwo(int num_to_conv, int * array)
{
    for (int count = 31; count >= 0; count--) {
        int mask = num_to_conv >> count;
        if (mask & 1) {
            array[count] = 1;
        }
        else {
            array[count] = 0;
        }
    }
}

void divideBtwo(int * dividend, int * divisor)
{
    // printf("%d", dividend[1]);
    // unsigned int quotient = 0;
    // int *remainder = dividend;
    // int *mask = divisor;

    // int index = 0;
    for (int i = 0; i < 32; i++) 
    {
        printf("%d", divisor[i]);
    }

    for (int i = 32; i <= 0; i--) 
    {
        while (divisor[i] < dividend[i]) 
        {
            divisor[i] = divisor[i] << 1;
            printf("%d", divisor[i]);
        }
    }


    printf("\n");
    for (int i = 0; i < 32; i++) 
    {
        printf("%d", dividend[i]);
    }
}       

int main( int argc, char *argv[])
{
    // int rem = 0, quotient = 0;
    int arr_arg1[32];
    int arr_arg2[32];
    if ( argc > 3 || argc < 3) {
       printf("Input 2 numbers please!\n");
    }
    else {
        printf("arg1 = %s, arg2 = %s\n", argv[1], argv[2]);
        int arg1_Bten = convBten(argv[1]);
        // printf("%d", arg1_Bten);
        convBtwo(arg1_Bten, arr_arg1);
        int arg2_Bten = convBten(argv[2]);
        convBtwo(arg2_Bten, arr_arg2);

        divideBtwo(arr_arg1, arr_arg2); 
        // int quotient = divideBtwo(arr_arg1, arr_arg2); 
        // printf("%d", quotient);
        // int quotient = getRes(arg1_Bten, arg2_Bten);
        // printf("%s / %s = %d R %d\n", argv[1], argv[2], quotient, rem);
    } 
}