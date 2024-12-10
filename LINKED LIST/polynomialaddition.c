#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int info;
    int coef;
    int exp;
    struct node *next;
};

struct node *GetNode(void)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}

struct node* InsEnd(struct node *START,  int c, int e)
{
    struct node *p = GetNode();
    p->coef = c;
    p->exp = e;
    p->next = NULL;

    if (START == NULL) {
        return p;
    }

    struct node *q = START;
    while (q->next != NULL) {
        q = q->next;
    }
    q->next = p;
    return START;
}

void traverse(struct node *START)
{
    struct node *p;
    p = START;
    while (p != NULL)
    {
        printf("(%d*x^%d)", p->coef,p->exp);
        if(p->next!=NULL)
        {
            printf(" + ");
        }
        p = p->next;
    }
}
struct node *PolynomialAddition(struct node *poly1, struct node *poly2)
{
    struct node *p = poly1;
    struct node *q = poly2;
    struct node *poly3 = NULL;
    while (p != NULL && q != NULL)
    {
        if (p->exp == q->exp)
        {
            poly3=InsEnd(poly3, p->coef + q->coef, p->exp);
            p = p->next;
            q = q->next;
        }
        else
        {

            if (p->exp > q->exp)
            {
                poly3=InsEnd(poly3, p->coef, p->exp);
                p= p->next;
            }
            if (p->exp < q->exp)
            {
                poly3=InsEnd(poly3, q->coef, q->exp);
                q = q->next;
            }
        }
    }
    while(p!=NULL)
    {
        poly3=InsEnd(poly3, p->coef, p->exp);
        p=p->next;
    }
    while(q!=NULL)
    {
        poly3=InsEnd(poly3, q->coef, q->exp);
        q=q->next;
    }
    return poly3;
}
int main()
{
    struct node* poly1,*poly2,*result=NULL;
    poly1=NULL;
    poly2=NULL;
    poly1=InsEnd(poly1,7,8);
    poly1=InsEnd(poly1,6,7);
    poly1=InsEnd(poly1,8,6);
    poly1=InsEnd(poly1,5,5);
    poly1=InsEnd(poly1,3,4);
    poly1=InsEnd(poly1,5,3);
    poly1=InsEnd(poly1,1,2);
    poly1=InsEnd(poly1,9,0);
    printf("Poynomial 1 --> ");
    traverse(poly1);
    printf("\n\n");

    poly2=InsEnd(poly2,3,8);
    poly2=InsEnd(poly2,8,7);
    poly2=InsEnd(poly2,5,6);
    poly2=InsEnd(poly2,1,5);
    poly2=InsEnd(poly2,8,3);
    poly2=InsEnd(poly2,-3,2);
    poly2=InsEnd(poly2,-2,1);
    poly2=InsEnd(poly2,-8,0);
    printf("Poynomial 2 --> ");
    traverse(poly2);
    printf("\n\n");

    result=PolynomialAddition(poly1, poly2);
    printf("Polynomial Addition --> ");
    traverse(result);
    printf("\n\n");
    return 0;
}