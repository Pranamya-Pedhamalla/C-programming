#include<stdio.h>
#include<math.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int i = a+1;
while(i<b){
int s = pow(i,2);
int c = pow(i,3);
printf("%d %d %d",i,s,c);
i = i+1;
}
return 0;

}
