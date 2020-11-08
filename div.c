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

// int getRes(int dividend, int divisor)
// {
    
// }

void convBtwo(int num_to_conv)
{
    int arr[32] = {};
    int num;
    for (int count = 31; count >= 0; count--) {
        int mask = num_to_conv >> count;
        if (mask & 1) {
            arr[count] = 1;
        }
        else {
            arr[count] = 0;
        }
        // printf("%d", arr[count]);
        int num = arr[count];
        return num;
    }
}

int main( int argc, char *argv[])
{
    // int rem = 0, quotient = 0;
    if ( argc > 3 || argc < 3) {
       printf("Input 2 numbers please!\n");
    }
    else {
        printf("arg1 = %s, arg2 = %s\n", argv[1], argv[2]);
        int arg1_Bten = convBten(argv[1]);
        int arg1_Btwo = convBtwo(arg1_Bten);
        printf("%d", arg1_Btwo);
        // int arg2_Bten = convBten(argv[2]);
        // printf("%d", arg1_Btwo);
        // int arg2_Btwo = convBtwo(arg2_Btwo);
        // int quotient = getRes(arg1_Bten, arg2_Bten);

        // printf("%s / %s = %d R %d\n", argv[1], argv[2], quotient, rem);
    } 
}