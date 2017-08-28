#include<stdio.h>
int *ptr,c;
void print(){
	printf("Hello World\n");
}
int *Add(int *a,int *b){
	c = (*a) + (*b);
	return &c;
}
int main(){
	int a=2,b=4;
	ptr = Add(&a,&b);
	print();
	printf("Sum = %d\n",*ptr);
}
