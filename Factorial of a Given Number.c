#include<stdio.h>
int main()
{
int n,i,d;
scanf("%d",&n);
d = 1;
i = 1;
while(i <= n){
d = d*i;
i++;
}
printf("%d",d);
return 0;
}
