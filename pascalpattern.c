#include<stdio.h>
int main()
{
int i,j,sp,sd=1,num;
printf("enter the number :");
scanf("%d",&num);
for(i=0;i<num;i++)
{
for(sp=1;sp<=num-i;sp++)
{
printf("  ");
}
for(j=0;j<=i;j++)
{
if(i==0||j==0)
{
sd=1;
}
else
{
sd=sd*(i-j+1)/j;

}
printf("%d   ",sd);
}
printf("\n");
}
}