#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("max:%d\n",a);
		printf("min:%d",b);
	}
	else if(b>a){
		printf("max:%d\n",b);
		printf("min:%d",a);
	}
	else{
		printf("Equal");
	}
	return 0;
}
	
		
	

	

