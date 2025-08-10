#include "../inc/stack.h"

void stackInit(stack *s)
{
    s->Top = -1;
    s->base = 0;
    memset(s->data, 0, sizeof(int) * MAXSTACKELEMENT);
}

bool stackIsEmpty(stack *s)
{
    return s->Top < s->base;
}
bool stackIsFull(stack *s)
{
    return s->Top >= MAXSTACKELEMENT - 1;
} // 比之前的queue简化了，写queue的函数太长了。

bool stackPush(stack *s, int val)
{
    if (stackIsFull(s))
        return false;
    else
    {
        s->data[++s->Top] = val;
        return true;
    }
}
bool stackPop(stack *s, int *val)
{
    if (stackIsEmpty(s) || val == NULL)
        return false;
    else
    {
        *val = s->data[s->Top--];
        return true;
    }
}