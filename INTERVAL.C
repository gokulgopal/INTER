#include<stdio.h>
void main()
{
int n,r,sum=0;
printf("%d",&n);
{
r=n%10;
sum=r*r*r;
n=n/10;
}
if(n==sum)
{
printf("ARMSTRONG");
}
}
