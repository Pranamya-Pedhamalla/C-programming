#include<stdio.h>
int main()
{
int n,i,d,s,p;
scanf("%d",&n);
S = 0;
p = 1;
i = 1;
while(i <= n){
d = n%10;
S = s +d;
p = p*d;
= n/10;
}
if(s == p){
printf("Spy Number");
} else {
printf("Not Spy Number");
}
return 0;
}
