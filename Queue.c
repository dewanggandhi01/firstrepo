#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
#define true 1
#define false 0
struct cqueue
{
    int item[MAXSIZE];
    int front;
    int rear;
};
struct cqueue CQ;
int Initialize()
{
    CQ.rear=5;
    CQ.front=5;
}
int IsEmpty()
{
    if(CQ.rear==CQ.front)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void EnQueue(int x)
{
    if((CQ.rear+1) % MAXSIZE==CQ.front)
    {
        printf("Queue Overflow");
        exit(1);
    }
    else
    {
        CQ.rear=(CQ.rear+1)% MAXSIZE;
        CQ.item[CQ.rear]=x;
    }
}
int DeQueue()
{
    int x;
    if(IsEmpty(CQ))
    {
        printf("Queue Underflow");
        exit(1);
    }
    else
    {
        CQ.front=(CQ.front+1)% MAXSIZE;
        x=CQ.item[CQ.front];
        return x;
    }
}
int main()
{
    Initialize();
    EnQueue(1);
    EnQueue(2);
    EnQueue(3);
    EnQueue(4);
    EnQueue(5);
    EnQueue(6);
    EnQueue(7);
    EnQueue(8);
    EnQueue(9);
    EnQueue(10);
    int x=DeQueue(x);
    printf("%d/n/n",x);
    x=DeQueue(x);
    printf("%d/n/n",x);
    return 0;

}

