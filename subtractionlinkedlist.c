#include<stdio.h>
#include<stdlib.h>
#include<math.h>


struct node {
    int data;
    struct node* next;
};

struct node* numll(int num){
    struct node* start= (struct node*)malloc(sizeof(struct node));
    struct node* in= start;
    while(num!=0){
        int digit=0;
        digit= num%10;
        struct node* d= (struct node*)malloc(sizeof(struct node));
        d->data= digit;
        start->next= d;
        d->next=NULL;
        start= d;
        num= num/10;
    }
    return in;
}

struct node* sub(int a, int b){
    struct node* start= (struct node*)malloc(sizeof(struct node));
    struct node* ns= start;
    int diff=0, borrow=0;
    struct node* a1= numll(a);
    struct node* b1= numll(b);
    
    a1= a1->next;
    b1= b1->next;

    if(a>b){
        while(a1 && b1){
        if(borrow==1){
            int c= (a1->data)-1;
            if(c >= b1->data){
                diff= c - b1->data;
                borrow=0;
            }
            else{
                c= c+10;
                diff= c- b1->data;
                borrow=1;
            }
            struct node* n= (struct node*)malloc(sizeof(struct node));
            n->data= diff;
            n->next= NULL;
            start->next= n;
            start=n;
            a1=a1->next;
            b1= b1->next;
        }
        else{
            if(a1->data>=b1->data){
                diff= a1->data- b1->data;
                borrow= 0;
            }
            else{
                int c= a1->data+10;
                diff= c-b1->data;
                borrow=1;
            }
            struct node* n= (struct node*)malloc(sizeof(struct node));
            n->data= diff;
            n->next= NULL;
            start->next= n;
            start=n;
            a1=a1->next;
            b1= b1->next;
        }
        }
    }

    if(b>a){
        while(b1 && a1){
        if(borrow==1){
            int c= (b1->data)-1;
            if(c >= a1->data){
                diff= c - a1->data;
                borrow=0;
            }
            else{
                c= c+10;
                diff= c- a1->data;
                borrow=1;
            }
            struct node* n= (struct node*)malloc(sizeof(struct node));
            n->data= diff;
            n->next= NULL;
            start->next= n;
            start=n;
            b1=b1->next;
            a1= a1->next;
        }
        else{
            if(b1->data>=a1->data){
                diff= b1->data- a1->data;
                borrow= 0;
            }
            else{
                int c= b1->data+10;
                diff= c-a1->data;
                borrow=1;
            }
            struct node* n= (struct node*)malloc(sizeof(struct node));
            n->data= diff;
            n->next= NULL;
            start->next= n;
            start=n;
            b1=b1->next;
            a1= a1->next;
        }
        }
    }
    
    while(a1){
        if(borrow==1){
            diff= a1->data-1;
            struct node* n= (struct node*)malloc(sizeof(struct node));
            n->data= diff;
            n->next= NULL;
            start->next= n;
            start=n;
            a1=a1->next;
            borrow=0;
        }
        else{
            diff= a1->data;
            struct node* n= (struct node*)malloc(sizeof(struct node));
            n->data= diff;
            n->next= NULL;
            start->next= n;
            start=n;
            a1=a1->next;
            borrow=0;
        }
    }
    while(b1){
        if(borrow==1){
            diff= b1->data-1;
            struct node* n= (struct node*)malloc(sizeof(struct node));
            n->data= diff;
            n->next= NULL;
            start->next= n;
            start=n;
            b1=b1->next;
        }
        else{
            diff= b1->data;
            struct node* n= (struct node*)malloc(sizeof(struct node));
            n->data= diff;
            n->next= NULL;
            start->next= n;
            start=n;
            b1=b1->next;
        }
    }
    return ns;
}

void printll(struct node* n){
    while(n){
        printf("%d",n->data);
        n=n->next;  
    }
}

struct node* reversell(struct node* head) {
    struct node* prev = NULL;
    struct node* current = head->next;
    struct node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev; // new head of the reversed list
}

int main() {
    struct node* n1= numll(123);
    struct node* rn= reversell(n1);
    printf("\n");
    struct node* ns= sub(237,944);
    struct node* rns= reversell(ns);
    printf("the difference of %d and %d is: ", 237,944);
    printll(rns);
}