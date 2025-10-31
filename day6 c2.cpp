#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int greatest = (a>b && a>c) ? a:(b>c ? b:c);
	int smallest = (a<b && a<c) ? a:(b>c ? b:c);
	printf("greatest =%d\n smallest = %d",greatest,smallest);
	return 0;
}
