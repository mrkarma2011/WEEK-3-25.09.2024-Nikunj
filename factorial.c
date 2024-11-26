#include<stdio.h>
int main()
{

    
        int x;
        printf("enter your number: ");
        scanf("%d", &x);
        
    int b=1,i;
    for (i = 1; i <= x; i++)
    {
        b = b*i;
    }
    printf("%d factorial is %d", x,b);

    
    
}
