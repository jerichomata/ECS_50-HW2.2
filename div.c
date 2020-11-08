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
    printf("%d", dividend[1]);

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
        /*printf("%d", arr_arg1[0]);
        printf("%d", arr_arg1[1]);
        printf("%d", arr_arg1[2]);
        printf("%d", arr_arg1[3]);
        printf("%d", arr_arg1[4]);
        printf("%d", arr_arg1[5]);
        printf("%d", arr_arg1[6]);
        printf("%d", arr_arg1[7]);
        printf("%d", arr_arg1[8]);
        printf("%d", arr_arg1[9]);
        printf("%d\n", arr_arg1[10]); */
        int arg2_Bten = convBten(argv[2]);
        convBtwo(arg2_Bten, arr_arg2);
        /*printf("%d", arr_arg2[0]);
        printf("%d", arr_arg2[1]);
        printf("%d", arr_arg2[2]);
        printf("%d", arr_arg2[3]);
        printf("%d", arr_arg2[4]);
        printf("%d", arr_arg2[5]);
        printf("%d", arr_arg2[6]);
        printf("%d", arr_arg2[7]);
        printf("%d", arr_arg2[8]);
        printf("%d", arr_arg2[9]);
        printf("%d\n", arr_arg2[10]);
        */ 

        divideBtwo(*arr_arg1, *arr_arg2);

        // int arg1_Btwo = convBtwo(arg1_Bten);
        // printf("%d", arg1_Btwo);
        // int arg2_Bten = convBten(argv[2]);
        // printf("%d", arg1_Btwo);
        // int arg2_Btwo = convBtwo(arg2_Btwo);
        // int quotient = getRes(arg1_Bten, arg2_Bten);

        // printf("%s / %s = %d R %d\n", argv[1], argv[2], quotient, rem);
    } 
}