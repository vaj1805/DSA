#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    char city[20];
    int x;
    int y;
    struct node *next;
};

struct node *createNode(char city[20], int x1, int y1) {
    
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->x = x1;
    n->y = y1;
    strcpy(n->city, city);

    return n;

}

struct node *insertbetwn(struct node* head,char d1[], char[] d2, int x1, int y1) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;

    while (p->city != d2)
    {
        p = p->next;
    }
    ptr->city = d1;
    ptr->x = x1;
    ptr->y = y1;
    ptr->next = p->next;
    
    
}

struct node *delete(struct node* head,char[] c) {
    
    struct node *ptr = head;
    
    while (ptr->city != c)
    {
        ptr = ptr->next;
    }
    struct node* ptr2 = ptr->next;
    ptr->next = ptr2->next;
    free(ptr2);
    return ptr;
    
}


