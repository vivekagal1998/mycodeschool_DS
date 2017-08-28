#include<stdio.h>
void print(char *c){
	*c='V';
	while(*c!='\0'){
		printf("%c",*c);
		c++;
	}
}

int main(){
	char c[30]="My college name is SVNIT.";
	print(c);
}
