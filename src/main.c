/*
 * Description: 
 *
 *    Autor: xbai
 *    Date: 2025/10/11
 */

#include <stdio.h>
#include "add.h"
#include "sub.h"


int main(void)
{
    uint8 output;
    uint8 input1 = 20;
    uint8 input2 = 5;

    output = u8AddFun(input1, input2);
    printf("The result of addition is: %d", &output);

    output = u8SubFun(input1, input2);
    printf("The result of subtraction is: %d", &output);

    return 0;
}