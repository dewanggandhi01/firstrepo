#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *Next;
};



struct node *GetNode(void)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}

void InsBeg(struct node **START, int x)
{
    struct node *p;
    p = GetNode();
    p->info = x;
    p->Next = *START;
    *START = p;
}

void InsEnd(struct node **START, int x)
{
    struct node *p;
    struct node *Q = *START;
    while (Q->Next != NULL)
    {
        Q = Q->Next;
    }
    p = GetNode();
    p->info = x;
    p->Next = NULL;
    Q->Next = p;
}
void CountNodes(struct node **START)
{
    struct node *p = *START;
    int count = 0;
    while (p != NULL)
    {
        count += 1;
        p = p->Next;
    }
    printf("Total number of Nodes in a Linked List are : ");
    printf("%d \n", count);
}

void PairWiseSwap(struct node **START)
{
    struct node *p = *START;
    struct node *Q = p->Next;
    while (p != NULL && Q != NULL)
    {
        int temp = p->info;
        p->info = p->Next->info;
        p->Next->info = temp;
        p = p->Next;
        p = p->Next;
        Q = Q->Next;
        if (Q != NULL)
        {
            Q = Q->Next;
        }
    }
}

InsAft( struct node **p, int x)
{
    struct node *Q, *R;
    
}
void insertAtPosition(struct node **START, int value, int position) {
    struct node *newNode, *currentNode;
    int currentPosition = 1;
    newNode = GetNode();
    newNode->info = value;
    if (position == 1) {
        newNode->Next = *START;
        *START = newNode;
        return;
    }
    currentNode = *START;
    while (currentNode != NULL && currentPosition < position - 1) {
        currentPosition++;
        currentNode = currentNode->Next;
    }
    if (currentNode == NULL) {
        printf("Position out of range\n");
    } else {
        newNode->Next = currentNode->Next;
        currentNode->Next = newNode;
    }
}

// void InsEnd(struct node **START)
// {
//     struct node *p, *q;

// }

int reverseTraverse(struct node **START)
{
    struct node *prev=NULL, *curr=*START, *next=NULL;
    while(curr!=NULL)
    {
        next=curr->Next;
        curr->Next=prev;
        curr=next;
        prev=curr;
    }
    return prev;
}


void Traverse(struct node **START)
{
    struct node *p;
    p = *START;
    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->Next;
    }
}

int main()
{
    struct node *START;
    START = NULL;
    InsBeg(&START,10);
    InsBeg(&START,20);
    InsBeg(&START,30);
    InsBeg(&START,40);
    InsBeg(&START,50);
    InsBeg(&START,60);
    InsBeg(&START,70);
    InsBeg(&START,80);
    InsEnd(&START,25);
    CountNodes(&START);
    Traverse(&START);
    printf("\n");
    PairWiseSwap(&START);
    Traverse(&START);
    reverseTraverse(&START);
    Traverse(&START);
    return 0;
}















