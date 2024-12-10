#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int info;
    struct ListNode* next;
};

struct ListNode* GetNode(void) {
    struct ListNode* P = (struct ListNode*)malloc(sizeof(struct ListNode));
    P->next = NULL; 
    return P;
}

struct ListNode* InsBeg(struct ListNode* head, int x) {
    struct ListNode* p = GetNode();
    p->info = x;    
    p->next = head;   
    return p;        
}

struct ListNode* Reverse(struct ListNode* head) {
    struct ListNode *prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* l = NULL;  
    struct ListNode *p = list1, *q = list2;

    while (p != NULL && q != NULL) {
        if (p->info > q->info) {
            l = InsBeg(l, q->info); 
            q = q->next;
        } else {
            l = InsBeg(l, p->info); 
            p = p->next;
        }
    }
    while (q != NULL) {
        l = InsBeg(l, q->info);
        q = q->next;
    }
    while (p != NULL) {
        l = InsBeg(l, p->info);
        p = p->next;
    }
    return Reverse(l); 
}

void PrintList(struct ListNode* head) {
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct ListNode *START1 = NULL, *START2 = NULL, *START3 = NULL;

    START1 = InsBeg(START1, 5);
    START1 = InsBeg(START1, 3);
    START1 = InsBeg(START1, 1);

    START2 = InsBeg(START2, 6);
    START2 = InsBeg(START2, 4);
    START2 = InsBeg(START2, 2);

    START3 = mergeTwoLists(START1, START2);

    printf("Merged Sorted List:\n");
    
    PrintList(START3);
    return 0;
}

