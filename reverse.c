#include<stdio.h>
int main()
{
		int n,k,rev=0;
	printf("enter n ");
	scanf("%d",&n);
	while(n!=0){
		k=n%10;
		rev= rev*10 + k;
		n=n/10; 
	}
	printf("reverse of %d is %d",n,rev);
	return 0;
}

