#define QUEUE_SIZE 5
int count = 0;

int isQueueEmpty(void)
{
    if(count  == 0)
        return true;
    else
        return false;
}
int isQueueFull(void)
{
    return count >= QUEUE_SIZE;
}


