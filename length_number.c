#include<stdio.h>
int main()
{
		int n,c=0;
	printf("enter n ");
	scanf("%d",&n);
	while(n!=0){
		c++;
		n=n/10;
	}
	printf("%d", c);
	return 0;
}

