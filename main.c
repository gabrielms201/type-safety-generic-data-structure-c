#include "main.h"

int main()
{
    printf("\nFor Static Stack: \n");
    StaticStackSample();
    printf("\nFor Dynamic Stack: \n");
    DynamicStackSample();
}

void StaticStackSample()
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
            printf("%d", IntStackPop(stack));
            if (!IntStackIsEmpty(stack))
            {
                printf(" - ");
            }
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
            printf("%.2f", DoubleStackPop(stack));
            if (!DoubleStackIsEmpty(stack))
            {
                printf(" - ");
            }
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
            printf("%c", CharStackPop(stack));
            if (!CharStackIsEmpty(stack))
            {
                printf(" - ");
            }
        }
        printf("\n");
        CharStackDelete(stack);
    }

}
void DynamicStackSample()
{
    // Dynamic Int Stack Sample
    {
        CREATE_DY_STACK(IntDyStack, int);

        IntDyStack* stack = IntDyStackStart();
        IntDyStackPush(stack, 1);
        IntDyStackPush(stack, 2);
        IntDyStackPush(stack, 3);
        IntDyStackPush(stack, 4);
        IntDyStackPush(stack, 5);
        IntDyStackPop(stack);

        printf("Dynamic IntStack Content: \n");
        while (!IntDyStackIsEmpty(stack))
        {
            printf("%d", IntDyStackPop(stack));
            if (!IntDyStackIsEmpty(stack))
            {
                printf(" - ");
            }
        }
        printf("\nSize: %d", stack->Size);
    }

    // Dynamic Double Stack Sample
    {
        CREATE_DY_STACK(DoubleDyStack, double);

        DoubleDyStack* stack = DoubleDyStackStart();
        DoubleDyStackPush(stack, 1.2);
        DoubleDyStackPush(stack, 2.3);
        DoubleDyStackPush(stack, 3.4);
        DoubleDyStackPush(stack, 4.5);
        DoubleDyStackPush(stack, 5.6);
        DoubleDyStackPop(stack);

        printf("Dynamic DoubleStack Content: \n");
        while (!DoubleDyStackIsEmpty(stack))
        {
            printf("%.2f", DoubleDyStackPop(stack));
            if (!DoubleDyStackIsEmpty(stack))
            {
                printf(" - ");
            }
        }
        printf("\nSize: %d", stack->Size);
    }

    // Dynamic Char Stack Sample
    {
        CREATE_DY_STACK(CharDyStack, char);

        CharDyStack* stack = CharDyStackStart();
        CharDyStackPush(stack, 'a');
        CharDyStackPush(stack, 'b');
        CharDyStackPush(stack, 'c');
        CharDyStackPush(stack, 'd');
        CharDyStackPush(stack, 'e');
        CharDyStackPop(stack);

        printf("Dynamic CharStack Content: \n");
        while (!CharDyStackIsEmpty(stack))
        {
            printf("%c", CharDyStackPop(stack));
            if (!CharDyStackIsEmpty(stack))
            {
                printf(" - ");
            }
        }
        printf("\nSize: %d", stack->Size);
    }
}


