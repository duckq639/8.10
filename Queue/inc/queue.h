#ifndef QUEUE_H
#define QUEUE_H

#include "stdio.h"
#include "stdbool.h"
#include "stdint.h"
#include "stdlib.h"
#include "string.h"
#define MAXQUEUEELEMENT 10

typedef struct Queue
{
    uint32_t Front;
    uint32_t Rear;
    int data[MAXQUEUEELEMENT];
} queue;

void queueInit(queue *q);
bool queueIsEmpty(queue *q);
bool queueIsFull(queue *q);
bool queuePush(queue *q, int val);
bool queuePull(queue *q, int *val);
#endif // QUEUE_H