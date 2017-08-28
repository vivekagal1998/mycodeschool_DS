#include<stdio.h>

struct node{
	int item;
	struct node* next;
};
struct node* head;

void insert(int item,int n){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->item = item;
	temp->next = NULL;
	if(n==1){
		temp->next = head;
		head = temp;
		return;
	}
	struct node* temp1;
	temp1 = head;
	int i;
	for( i = 0;i<n-2;i++){
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;
}

void print(){
	struct node* temp = head;
	while(temp!=NULL){
		printf("%d ",temp->item);
		temp = temp->next;
	}
}

int main(){
	head = NULL;
	insert(2,1);//2
	insert(3,2);//2 3 
	insert(4,1);//4 2 3
	insert(5,3);//4 2 5 3
	print();
}
