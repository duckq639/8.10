#include "../inc/queue.h"

queue queue1;
queue *queue1P = &queue1;

int main()
{
    int value = 1;
    int *p = &value;
    queueInit(queue1P);
    for (int i = 0; i < 5; i++)
        queuePush(queue1P, i);
    for (int i = 0; i < 2; i++)
    {
        queuePull(queue1P, p);
        printf("%d ", *p);
    }
}