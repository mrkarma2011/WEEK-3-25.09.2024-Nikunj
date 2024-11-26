#include<stdio.h>
#include<math.h>
int main(){
    int n;
printf("Enter a decimal number: ");
scanf("%d", &n);
int i=0,k,bin[32]={0};
while(n!=0)
{
    bin[i] +=  n%2;
    n/=2;
    i++;
}


printf("The binary equivalent of the decimal number is: ");
for(int j=i-1; j>=0; j--)
printf("%d" ,bin[j]);
}