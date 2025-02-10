#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void list_traverse(struct node* start) {
    while (start != NULL)
    {
        printf("%d\n", start->data);
        start = start->next;
    }
    
}

struct Node* node_insert_between(struct Node* head,int loc,int element) {
    struct Node *newnode;
    newnode
    else
    {
        int i = 0;
        struct Node *temp = head;
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->data = element;
        while (i != loc-1)
        {
            temp = temp->next;
            i++;
        }
        
    }
    
}

struct Node* node_insert_end(struct Node* head,int data) {
    struct Node* last_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr = head;
    while (ptr != NULL)
    {
        ptr = ptr->next;
    }
    last_node->data = data;
    last_node->next = NULL;
    ptr->next = last_node;
    return head;
    
}

struct abc {
    int a;
    float xy;
}