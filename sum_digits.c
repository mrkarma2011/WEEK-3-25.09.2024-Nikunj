#include<stdio.h>
int main()
{
		int n,k,s=0;
	printf("enter n ");
	scanf("%d",&n);
	while(n!=0){
		k=n%10;
		s = s+k;
		n=n/10;
	}
	printf("%d", s);
	return 0;
}

