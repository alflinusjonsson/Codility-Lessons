#include <stdio.h>
#include <stdlib.h>

// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

long decimalToBinary(int decimal)
{
    long binary = 0, remainder, temp = 1;
    while(decimal != 0)
    {
        remainder = decimal % 2;
        binary = binary + remainder * temp;
        temp = temp * 10;
        decimal = decimal / 2;
    }
    return binary;
}

int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    long binary = decimalToBinary(N);
    int length = snprintf( NULL, 0, "%ld", binary);
    char* str = malloc( length + 1 );
    snprintf( str, length + 1, "%ld", binary);

    int binary_gap = 0;
    int temp_gap = 0;

    for (int i = 0; i < length; i++) {
        if(str[i]=='0'){
            temp_gap++;
            continue;
        }else if(str[i]=='1'){
            if(temp_gap > binary_gap)
                binary_gap = temp_gap;
            temp_gap = 0;
        }
    }
    return binary_gap;
}