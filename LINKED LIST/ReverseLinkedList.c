#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct
{
    int data[MAX];
    int top;
} stack;

struct node 
{
    int info;
    struct node*Next;
};

struct node*START;

struct node*GetNode(void)
{
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}

void Initialisation(stack* S)
{
    S->top=-1;
}

int IsEmpty(stack* S)
{
    return S->top==-1;
}

void Push(stack* S, int x)
{
    if(S->top==MAX-1)
    {
        printf("Stack Overflow");
        exit(1);
    }
    else
    {
        // S->top=S->top+1;
        // S->item[S->top]=x;
        S->data[++S->top] = x;
    }
}

int Pop(stack*S)
{
    if (IsEmpty(S)) 
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return S->data[S->top--];
}

void InsBeg(int x)
{
    struct node*p;
    p=GetNode();
    p->info=x;
    p->Next=START;
    START=p;
}

void Reverse(struct node* START)
{
    stack S;
    struct node* p;
    Initialisation(&S);
    p=START;
    while(p!=NULL)
    {
        int x=p->info;
        Push(&S,p->info);
        p=p->Next;
    }
    p=START;
    while(!IsEmpty(&S))
    {
        int x=Pop(&S);
        p->info=x;
        p=p->Next;
    }

}

void Traverse(void)
{
    struct node*p;
    p=START;
    while(p!=NULL)
    {
        printf("%d ", p->info);
        p=p->Next;
    }
}

int main() {
    START = NULL;
    InsBeg(10);
    InsBeg(20);
    InsBeg(30);
    InsBeg(40);
    InsBeg(50);
    printf("Original List: ");
    Traverse();
    Reverse(START);
    printf("Reversed List: ");
    Traverse();

    return 0;
}


