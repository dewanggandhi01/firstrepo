#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* father;
    struct node* left;
    struct node* right;
};

struct node* MakeNode(int x)
{
    struct node*p=(struct node*)malloc(sizeof(struct node));
    p->father=NULL;
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

struct node* BinarySearchTreeInsertion(struct node* T, int x)
{
    struct node* p, *q;
    p=T;
    q=NULL;
    while(p!=NULL)
    {
        q=p;
        if(x>p->data)
        {
            p=p->right;
        }
        else{
            p=p->left;
        }
    }
    if(q==NULL)
    {
        T=MakeNode(x);
    }
    else if(x< q->data)
    {
        q->left=MakeNode(x);
    }
    else{
        q->right=MakeNode(x);
    }
    return T;
}

void InOrderTraversal(struct node* T)
{
    if(T!=NULL)
    {
        InOrderTraversal(T->left);
        printf("%d ", T->data);
        InOrderTraversal(T->right);
   }

}

struct node* Minimum(struct node* T)
{
    struct node*p;
    p=T;
    while(p->left!=NULL)
    {
        p=p->left;
    }
    return p;
}

struct node* Maximum(struct node* T)
{
    struct node*p;
    p=T;

    while(p->right!=NULL)
    {
        p=p->right;
    }
    return p;
}

struct node* BSTSearch(struct node* T, int x)
{
    struct node* p=T;
    while(p!=NULL)
    {
        if(p->data==x)
        {
            return p;
        }
        else{
            if(p->data>x)
            {
                p=p->left;
            }
            else{
                p=p->right;
            }
        }
    }
    return NULL;
}

bool IsLeft(struct node*T)
{
    struct node*p,*q;
    p=T;
    q=p->father;
    if(p->father!=NULL)
    {
        q=p->father;
        if(q->left==p)
        {
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}


bool IsRight(struct node*T)
{
    struct node*p,*q;
    p=T;
    q=p->father;
    if(p->father!=NULL)
    {
        q=p->father;
        if(q->right==p)
        {
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}

BSTSuccessor(struct node* T)
{
    struct node*p;
    p=T;
    if(p==NULL)
    {
        
    }
}

int main()
{
    struct node* Root=NULL;
    struct node*ans, *ans2,*ans3;
    Root=BinarySearchTreeInsertion(Root,50);
    Root=BinarySearchTreeInsertion(Root,40);
    Root=BinarySearchTreeInsertion(Root,70);
    Root=BinarySearchTreeInsertion(Root, 60);
    Root=BinarySearchTreeInsertion(Root, 170);
    Root=BinarySearchTreeInsertion(Root,150);
    Root=BinarySearchTreeInsertion(Root, 120);
    InOrderTraversal(Root);
    printf("\n");
    ans = Maximum(Root);
    if (ans != NULL) {
        printf("Maximum: %d\n", ans->data);
    }
    ans2 = Minimum(Root);
    if (ans2 != NULL) {
        printf("Minimum: %d\n", ans2->data);
    }
    ans3 = BSTSearch(Root, 40);
    if (ans3 != NULL) {
        printf("Found: %d\n", ans3->data);
    } else {
        printf("Value not found.\n");
    }
    int ans4=IsLeft(Root->left);
    printf("%d", ans4); 
    return 0;   

}