#include<stdio.h>
int count =0;
int x,y,n;

int fib(int n){
count++;
	if(n==0||n==1)
	return n;
	else
	return fib(n-1) + fib(n-2);
	
}
int main()
{
	printf("Enter the number ");
	scanf("%d",&n);
	printf("%d\n",fib(n));
	printf("Veriable used %d times\n",count);
	
}

