#include<stdio.h>
#include<conio.h>
int main()
{
int et[30],ts,n,i,x=0,tot=0;
char pn[10][10];

printf("Enter the no of processes:");
scanf("%d",&n);
printf("Enter the time quantum:");
scanf("%d",&ts);
for(i=0;i<n;i++)
