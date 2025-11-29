#include<stdio.h>
int main()
{
int a,i,c;
scanf("%d",&a);
i = 1;
while(i <= 12){
c = a*i;
printf("%d x %d = %d", a,i,c);

i = i+1;
}
return 0;
}
