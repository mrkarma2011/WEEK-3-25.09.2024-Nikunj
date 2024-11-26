#include<stdio.h>
int main()
{
		int n,s=0;
		int a0 = 0, a1=1;
	printf("enter n ");
	scanf("%d",&n);
	while((n-2)!=0){
		n--;
		s = a0 +a1;
		a0 = a1;
		a1 = s;
	}
	printf("%d",s);
	return 0;
}

