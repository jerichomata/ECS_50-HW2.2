#include <stdio.h>

unsigned divide(unsigned dividend, unsigned divisor) { 

    unsigned denom=divisor;
    unsigned current = 1;
    unsigned answer=0;

    if ( denom > dividend) 
        return 0;

    if ( denom == dividend)
        return 1;

    while (denom <= dividend) {
        denom <<= 1;
        current <<= 1;
    }

    denom >>= 1;
    current >>= 1;

    while (current!=0) {
        if ( dividend >= denom) {
            dividend -= denom;
            answer |= current;
        }
        current >>= 1;
        denom >>= 1;
    }    
    return answer;
}

int main() {
    int answer = divide(10, 2);
    printf("%d", answer);
}