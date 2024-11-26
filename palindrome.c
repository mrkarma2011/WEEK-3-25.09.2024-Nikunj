#include<stdio.h>
int main()
{
		int n,k;
		int rev=0;
		int c;
	printf("enter n ");
	scanf("%d",&n);
	c=n;
	while(n!=0){
		k=n%10;
		rev= rev*10 + k;
		n=n/10; 
	}
	if(rev==c)
	printf("%d is a palindrome",c );
	else if(rev!=c)
	printf("%d is not a palindrome", c);
	return 0;
}

