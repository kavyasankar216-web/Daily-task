#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
		printf("uppercase letter\n");
	else if(ch>='a' && ch>='z')
		printf("lowercase letters\n");
	else if(ch>='0' && ch>='9')
		printf("digit\n");
	else
		printf("special symbol\n");
	return 0;
	
}
