#include<stdio.h>

struct node{
	int item;
	struct node* next;
}*p;

int main(){
	struct node *x;
	p = (struct node*)malloc(sizeof(struct node));
	p->next = NULL;
	struct node *p1,*temp;
	temp = p;
	printf("Enter the first data\n");
	scanf("%d",&p->item);
	p->next = p1;
	printf("%d",p->item);
	/*while(p->next!=NULL){
		scanf("%d",&p->item);
	}*/
}
