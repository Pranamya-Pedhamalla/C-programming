#include<stdio.h>
int main()
{
int n,d,p,s;
scanf("%d",&n);
p = n*n;
S = 0;
while(p>0){
d = p%10;
S = s+d;
p = p/10;
}
if(s == n){
printf("Neon Number");
} else {
printf("Not Neon Number");
}
return 0;
}
