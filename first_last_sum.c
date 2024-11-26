#include<stdio.h>
int main()
{
		int n,s;
	printf("enter n ");
	scanf("%d",&n);
	int k = n%10;
	
	while(n>=10){
		n=n/10;
		s = n;
		
	}
	printf("%d", k+s);
	return 0;
}

