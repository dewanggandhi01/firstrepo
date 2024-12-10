#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* MakeNode(int x)
{
    struct node*p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

void PreOrderTraversal(struct node* T)
{
    if(T!=NULL)
    {
        printf("%d ", T->data);
        PreOrderTraversal(T->left);
        PreOrderTraversal(T->right);
    }

}
void PostOrderTraversal(struct node* T)
{
    if(T!=NULL)
    {
        PostOrderTraversal(T->left);
        PostOrderTraversal(T->right);
        printf("%d ", T->data);
    }

}

void InOrderTraversal(struct node* T)
{
    int count=0;
    if(T!=NULL)
    {
        InOrderTraversal(T->left);
        printf("%d ", T->data);
        InOrderTraversal(T->right);
   }

}

int CountofNodes(struct node* T)
{
    int count=0;
    if(T!=NULL)
    {
        return 1+ CountofNodes(T->left)+ CountofNodes(T->right);    
    }
    return 0;
}

int main()
{
    struct node*root;
    root=MakeNode(1);
    root->left=MakeNode(2);
    root->right=MakeNode(3);
    root->left->right=MakeNode(6);
    root->right->left=MakeNode(4);
    root->right->right=MakeNode(5);
    PreOrderTraversal(root);
    printf("\n\n");
    PostOrderTraversal(root);
    printf("\n\n");
    InOrderTraversal(root);
    printf("\n\n");
    printf("%d ", CountofNodes(root));
    printf("\n\n");
}
