#include "../inc/queue.h"

void queueInit(queue *q)
{
    q->Rear = 0;
    q->Front = q->Rear;
    memset(q->data, 0, sizeof(int));
}

bool queueIsEmpty(queue *q)
{
    if (q->Front == q->Rear)
        return true;
    else
        return false;
}
bool queueIsFull(queue *q)
{
    if ((q->Rear + 1) % MAXQUEUEELEMENT == q->Front)
        return true;
    else
        return false;
}
bool queuePush(queue *q, int val)
{
    if (queueIsFull(q))
        return false;
    else
    {
        q->data[q->Rear] = val;
        q->Rear = (q->Rear + 1) % MAXQUEUEELEMENT;
        return true;
    }
}
bool queuePull(queue *q, int *val)
{
    if (queueIsEmpty(q))
        return false;
    else
    {
        *val = q->data[q->Front];
        q->Front = (q->Front + 1) % MAXQUEUEELEMENT;
        return true;
    }
}