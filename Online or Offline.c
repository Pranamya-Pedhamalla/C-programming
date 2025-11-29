#include<stdio.h>
int main()
{
int n,m;
scanf("%d%d",&n,&m);
if((n - n*10.0/100.0)>m){
printf("DINING");
} else if(m>(n - n*10.0/100.0)){
printf("ONLINE");
} else {
printf("EITHER");
}
return 0;
}
