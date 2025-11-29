#include<stdio.h>
int main()
{
int a,b,i,c;
scanf("%d%d",&a,&b);
i = 1;
while(i <= b){
c = a*i;
printf("%d x %d = %d",a,i,c);
i = i+1;
}
return 0;
}
