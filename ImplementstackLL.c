#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node* link;
    
};
    *top = NULL;

struct node* add_beg(struct node* head, int d)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
};

void push(int data) {
    struct node* newNode = malloc(sizeof(newNode));
    if (newNode == NULL)
    {
        printf("overflow\n");
        exit(1);
    }
    newNode->data = 50;
    newNode->link = NULL;
    newNode->link = top;
    top = newNode;
    
}

void print() {
    
}