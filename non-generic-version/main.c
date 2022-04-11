#include <stdio.h>
#include "dystack.h"

int main()
{
    printf("Hello, World!\n");

    struct Stack* stack = Start();
    Push(stack, 1.2312312312321321312321321);
    Push(stack, 2.3);
    Push(stack, 3.4);
    Push(stack, 4.5);
    Push(stack, 5.6);
    Pop(stack);

    while (!IsEmpty(stack))
    {
        printf("%.2f", Pop(stack));
        if (!IsEmpty(stack))
        {
            printf(" - ");
        }
    }
    printf("\nSize: %d", stack->Size); 
    return 0;
}
