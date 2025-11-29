#include<stdio.h>
int main()
{
int n,i,s,d,t;
scanf("%d",&n);
t = n;
s = 0;
i = 1;
while(i <= n){
d = n%10;
S = s*10+d;
n = n/10;
}
if (s == t){
printf("Palindrome");
} else {
printf("Not Palindrome");
}
return 0;

}
