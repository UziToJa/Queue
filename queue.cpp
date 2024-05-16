
#define QUEUE_SIZE 5
int count = 0;
int queue_table[QUEUE_SIZE] = { 0 };
int queue_tail = 0;
int queue_head = 0;
int EMPTY_ELEMENT = -1;

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
int Poll(void)
{
    if (!isQueueEmpty())
    {
        int next_in_queue = queue_head;
        queue_head++;
        count--;
        if (queue_head >= QUEUE_SIZE)
        {
            queue_head = 0; //
        }
        return queue_table[next_in_queue];
    }
    return EMPTY_ELEMENT;
}
