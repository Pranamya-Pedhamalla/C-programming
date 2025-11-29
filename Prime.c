#include<stdio.h>
int main()
{
int n,i,c;
scanf("%d",&n);
C = 0;
i = 1;
while(i <= n){
if(n%i == 0){
C = c+1;
}
i = i+1;
}
if(c == 2){
printf("Prime");
} else {
printf("Not Prime");
}
return 0;
}
