//swapping wihout using 3rd var

int main()
{
	int a,b;
	printf("Enter the value of a and b ");
	scanf("%d%d",&a,&b);
	printf("\nthe value of a and b before swapping a:%d b:%d",a,b);
	 a=a+b;
	 b=a-b;
	 a=a-b;
	 printf("the value of a and b after swapping a:%d b:%d",a,b);
	
}
