#include<stdio.h>
#include<math.h>
int main(){
    int n;
printf("Enter a binary number: ");
scanf("%d", &n);
int i=0,k,dec=0;
while(n!=0)
{
    k = n%10;
    dec = dec + k*(pow(2,i));
    n = n/10;
    i++;
}

printf("The decimal equivalent of the binary number is: %d", dec);
}