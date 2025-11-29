#include<stdio.h>
int main()
{
int n,i,s,d,t;
scanf("%d",&n);
t = n;
S = 0;
i = 1;
while(i <= n){
d = n%10;
S = s*10+d;
n = n/10;
}
printf("%d",s);
return 0;
}
