#include<stdio.h>

struct node{
	int item;
	struct node* next;
};
struct node* head;

struct Node* insert(struct node* head,int data){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	int x;
	printf("\nEnter element to be inserted : ");
	scanf("%d",&x);
	//printf("\n");
	temp->item = x;
	temp->next = NULL;	
	if(head == NULL){
		head = temp;
		return;
	}
	//struct node* temp2 = (struct node*)malloc(sizeof(struct node));;
	struct node* temp2 = head;	
	while(temp2->next 52!=NULL){
		temp2 = temp2->next;
	}		
	temp2 = temp;
	return head;
}

void print(){
	struct node* temp = head;
	while(temp!=NULL){
		printf("%d  ",temp->item);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	head = NULL;
	head = insert(head,5);
	print();
	head = insert(head,10);
	print();	
	//reverse()
}
