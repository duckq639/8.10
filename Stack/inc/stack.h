#ifndef STACK_H
#define STACK_H
#include "stdio.h"
#include "stdbool.h"
#include "stdint.h"
#include "stdlib.h"
#include "string.h"

#define MAXSTACKELEMENT 10

typedef struct Stack
{
    int data[MAXSTACKELEMENT];
    int Top;
    int base;
} stack;

void stackInit(stack *s);

bool stackIsEmpty(stack *s);

bool stackIsFull(stack *s);
bool stackPush(stack *s, int val);

bool stackPop(stack *s, int *val);

#endif // !STACK