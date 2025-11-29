#include<stdio.h>
int main()
{
int n,a,b,d;
scanf("%d%d%d",&n,&a,&b);
while(a <= b){
d = n*a;
printf("%d x %d = %d",n,a,d);
a = a+1;
}
return 0;
}
