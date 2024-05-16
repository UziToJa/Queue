
#define QUEUE_SIZE 5
int count = 0;
int queue_table[QUEUE_SIZE] = { 0 };
int queue_tail = 0;
int queue_head = 0;

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

void Add(int val)
{
    if (!isQueueFull())
    {
        count++;
        queue_table[queue_tail] = val;
        queue_tail++;
        if (queue_tail >= QUEUE_SIZE)
        {
            queue_tail = 0;
        }
    }
}

int Peek(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[queue_head];
    }

    return queue_table[0];
}

