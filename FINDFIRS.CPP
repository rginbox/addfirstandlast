#include<stdio.h>
#include<conio.h>
int main()
{
int a,fd,ld,sum=0
;
clrscr();
printf("enter a number to find their first and last digit sum\n");
scanf("%d",&a);
ld=a%10;
while(51)
{

fd=a%10;
a=a/10;
if(a==0)
break;
}
sum=ld+fd;
printf("%d is sum",sum);
getch();
return 0;
}