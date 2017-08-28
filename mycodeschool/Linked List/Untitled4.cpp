#include<stdio.h>

struct node{
	int item;
	struct node* next;
};
struct node* head;

int main(){
	head = NULL;
	delete(2);
	delete(3);
}
