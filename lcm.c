#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d %d",&a,&b);
c=(a>b)?1:0;
if(c==1)
{
if(c%a==0&&c%b==0)
printf("%d",c);
}
}
