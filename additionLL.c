#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node* next;
};

struct node* input (struct node* start) {
	struct node* prev=start;
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	while(num>0){
		struct node* newnode = (struct node*) malloc (sizeof(struct node));
		newnode->data = num%10;
		newnode->next = NULL;
		prev->next = newnode;
		prev = newnode;
		num = (int)(num/10);
	}
	return start;
}

void printll (struct node* start){
	struct node* ptr=start->next;
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

struct node* add(struct node* num1, struct node* num2){
	struct node* ans = (struct node*) malloc (sizeof(struct node));
	ans->next = NULL;
	num1=num1->next;
	num2=num2->next;
	//struct node* ptr=ans;
	int carry=0;
	int sum=0;
	while(num1!=NULL && num2!=NULL){
		sum=(num1->data)+(num2->data)+carry;
		struct node* newnode=(struct node*) malloc (sizeof(struct node));
		newnode->data = (sum)%10;
		newnode->next = ans->next;
		ans->next = newnode;
		sum = sum/10;
		carry = sum%10;

		num1=num1->next;
		num2=num2->next;
	}
	while(num1!=NULL){
		sum=(num1->data)+carry;
		struct node* newnode=(struct node*) malloc (sizeof(struct node));
		newnode->data = (sum)%10;
		newnode->next = ans->next;
		ans->next = newnode;
		sum = sum/10;
		carry = sum%10;
		num1=num1->next;
	}
	while(num2!=NULL){
		sum=(num2->data)+carry;
		struct node* newnode=(struct node*) malloc (sizeof(struct node));
		newnode->data = (sum)%10;
		newnode->next = ans->next;
		ans->next = newnode;
		sum = sum/10;
		carry = sum%10;
		num2=num2->next;
	}
	if(carry!=0){
		struct node* newnode=(struct node*) malloc (sizeof(struct node));
		newnode->data= carry;
		newnode->next = ans->next;
		ans->next=newnode;	
	}
	return ans;
}

void main(){
	struct node* num1 = (struct node*) malloc (sizeof(struct node));
	num1->next=NULL;
	num1 = input(num1);
	//printf("1st Number = ");
	//printll(num1);
	
	struct node* num2 = (struct node*) malloc (sizeof(struct node));
	num2->next=NULL;
	num2 = input(num2);
	//printf("2nd Number = ");
	//printll(num2);
	
	struct node* answer = add(num1,num2);
	//printll(num1);
	//printf("+");
	//printll(num2);
	//printf("=");
	printll(answer);
}
