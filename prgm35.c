#include<stdio.h>
void main()
{
char a[100];
int n,i,sum=0,l;
scanf("%s",&a);
l=strlen(a);
for(i=0;i<=n;i++)
{
if(a[i]>=48&&a[i]<=57)
{
sum++;
}
}
  printf("%d",sum);
}
