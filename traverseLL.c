#include <stdio.h>
#include <stdlib.h>
#include


struct node
{
    int info;
    struct node *next;
};

void printNode(struct node *p) {
    while (p != NULL)
    {
        printf("%d", p->info);
        p = p->next;
    }
    
}

int main() {
    struct node *first,*second,*third,*fourth,*fifth,*sixth,*start;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    fourth = malloc(sizeof(struct node));
    fifth = malloc(sizeof(struct node));
    sixth = malloc(sizeof(struct node));

    first->info = 10;
    second->info = 20;
    third->info = 30;
    fourth->info = 40;
    fifth->info = 50;
    sixth->info = 60;

    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    start = first;

    printNode(start);

    return 0;

}
