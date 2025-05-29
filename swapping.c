//swapping using 3rd var

#include<stdio.h>

int main()
{
	int a,b,temp;
	printf("Enter the value of a and b ");
	scanf("%d%d",&a,&b);
	printf("\nthe value of a and b before swapping a:%d b:%d",a,b);
	temp =a;
	a=b;
	b=temp;
	printf("\nthe value of a and b after swapping a:%d b:%d",a,b);
}

