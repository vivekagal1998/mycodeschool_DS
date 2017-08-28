#include<bits/stdc++.h>

struct node{
	int item;
	struct node* next;
};

struct node* head;

void Insert(){
	struct node* temp;
	temp = ( node*)malloc(sizeof( node));
	int x;
	printf("\nEnter element to be inserted : ");
	scanf("%d",&x);
	printf("\n");
	temp->item = x;
	temp->next = NULL;
	temp->next = head;
	head = temp;
}

void Print(){
	struct node* temp = head;
	while(temp!=NULL){
		printf("%d  ",temp->item);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	head = NULL;
	printf("Enter number of Items : ");
	int n;
	scanf("%d",&n);
	printf("\n");
	int i;
	for(i=0;i<n;i++){
		int ch;
		printf("What would you like to perform:");
		scanf("%d",&ch);
		if(ch==1){
				Insert();
		}
		else if(ch==2){
			Print();
		}	
	}
}
