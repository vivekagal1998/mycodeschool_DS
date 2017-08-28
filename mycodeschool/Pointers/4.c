#include<stdio.h>
#include<string.h>
int main(){
	char a[25]="Vivek Shah";
	int i;
	//printf("%d\n",strlen(a));
	char *a1;
	a1=&a[0];
	for(i=0;i<strlen(a);i++){
		printf("%c",*(a1+i));
	}
}
