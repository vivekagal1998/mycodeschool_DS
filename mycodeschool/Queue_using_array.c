#include<stdio.h>

int size, front = -1, rear = -1;

void push(int a[]){
	//printf("front = %d and rear = %d\n",front,rear);
	if((rear+1)%size == front){
		printf("Overflow\n");
		return;
	}
	printf("Enter element to be pushed : ");
	int element;
	scanf("%d",&element);
	if(front==-1 && rear==-1){
		front=0;
		rear=0;
		a[rear] = element;
		return;
	}
	else{
		rear = (rear+1)%size;
		a[rear] = element;
	}
}

void pop(int a[]){
	if(isempty(a)){
		printf("Underflow");
		return;
	}
	printf("%d",a[front]);
	if(front == rear){
		front=rear=-1;
		return;
	}
	//printf("front = %d and rear = %d\n",front,rear);
	front = (front+1)%size;
}

int isempty(int a[]){
	if((front==-1 && rear==-1)){
		return 1;
	}
	return 0;
}

void front_dispaly(int a[]){
	if(isempty(a)){
		printf("No front element\n");
		return;
	}
	printf("%d\n",a[front]);
}

void display(int a[]){
	if(isempty(a)){
		printf("Nothing to display\n");
		return;}
	int i;
	for( i=front;i<=rear;i++){
		printf("%d -> ",a[i]);
	}
	printf("\n");
}
int main(){
	printf("Enter the size of the queue : ");
	scanf("%d",&size);
	int a[size];
	while(1){
	printf("\n1.Push\n2.Pop\n3.IsEmpty()\n4.Front\n5.Display\n");
	int ch;
	scanf("%d",&ch);
	
	if(ch==1){
		push(a);
	}
	else if(ch==2){
		pop(a);
	}
	else if(ch==3){
		if(isempty(a)){
			printf("Empty\n");
		}
		else{
			printf("Not Empty\n");
		}
	}
	else if(ch==4){
		front_dispaly(a);
	}
	else if(ch==5){
		display(a);
	}
	else{
		return 1;
	}
}
}
