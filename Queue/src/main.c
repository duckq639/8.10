#include "../inc/queue.h"

queue queue1;
queue *queue1P = &queue1;

int main()
{
    int value = 1;
    int *p = &value;
    queueInit(queue1P);
    queuePush(queue1P, value);
    printf("%d", queue1P->data[queue1P->Front]);
}