#include "../inc/stack.h"

int main()
{
    stack stack1;
    stack *SK = &stack1;
    int value;
    int *val = &value;

    stackInit(SK);

    for (int i = 0; i < MAXSTACKELEMENT; i++)
    {
        stackPush(SK, i);
    }
    for (int i = 0; i < 5; i++)
    {
        stackPop(SK, val);
        printf("%d ", *val);
    }
}