#include<stdio.h>
int main(){
	float l,b,s,ba,h,r;
	scanf("%f %f %f %f %f",&l,&b,&s,&ba,&h,&r);
	printf("rectangle=%.2f\n",l*b);
	printf("square=%.2f\n",s*s);
	printf("triangle=%.2f\n",0.5*ba*h);
	printf("circle=%.2f\n",3.14*r*r);
	return 0;
}
