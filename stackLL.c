#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node* next;
};

struct node *top = NULL;

void isEmpty() {
    if (top == NULL)
    {
        printf("stack emp");
    }
    else {
        printf("stack not empty");
    }
    
}

void isFull() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("stack overflow");
    }
    else
    {
        newnode->data = data;
        newnode->next = top;
        top = newnode;
    }
    
    
}

void pop() {
    struct node *p = top;
    printf("Element %d popped from stack..\n\n",p->data);
    top =top->next;
    free(p);
}

void printstack(){
    struct node *p=top;
    struct node *q=top->next;
    printf("| %d |<-Top\n",p->data);
    while(q!=NULL)
    {
    printf("| %d |\n",q->data);
    q=q->next;
    }
}