#include <stdio.h>
#include "stack.h"
int main();
void sample();


int main()
{
    sample();
    return 0;
}

void sample()
{
    // Int Stack Sample
    {
        CREATE_STACK(IntStack, int);
        IntStack* stack = IntStackStart(10);
        IntStackPush(stack, 1);
        IntStackPush(stack, 2);
        IntStackPush(stack, 3);
        IntStackPush(stack, 4);
        IntStackPush(stack, 5);

        printf("IntStack Content: \n");
        while (!IntStackIsEmpty(stack))
        {
            printf("- %d - ", IntStackPop(stack));
        }
        printf("\n");
        IntStackDelete(stack);
    }

    // Double Stack Sample
    {
        CREATE_STACK(DoubleStack, double);
        DoubleStack* stack = DoubleStackStart(10);
        DoubleStackPush(stack, 1.2);
        DoubleStackPush(stack, 2.3);
        DoubleStackPush(stack, 3.4);
        DoubleStackPush(stack, 4.5);
        DoubleStackPush(stack, 5.6);

        printf("DoubleStack Content: \n");
        while (!DoubleStackIsEmpty(stack))
        {
            printf("- %.2f - ", DoubleStackPop(stack));
        }
        printf("\n");
        DoubleStackDelete(stack);
    }

    // Char Stack Sample
    {
        CREATE_STACK(CharStack, char);
        CharStack* stack = CharStackStart(10);
        CharStackPush(stack, 'a');
        CharStackPush(stack, 'b');
        CharStackPush(stack, 'c');
        CharStackPush(stack, 'd');
        CharStackPush(stack, 'e');

        printf("CharStack Content: \n");
        while (!CharStackIsEmpty(stack))
        {
            printf("- %c - ", CharStackPop(stack));
        }
        printf("\n");
        CharStackDelete(stack);
    }

}


