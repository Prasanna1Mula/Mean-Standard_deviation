#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
FILE*fp;
float x,v,s,m,w,sd;
int a[10],i;
s=0;
fp=fopen("INTEGER.txt","w");
printf("enter array values: ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
fclose(fp);
for(i=0;i<10;i++)
{
s=s+a[i];
}
m=s/10;
s=0;
for(i=0;i<10;i++)
{
x=pow((a[i]-m),2);
}
s=s+x;
v=s/10;
sd=pow(v,0.5);
printf("\n mean= %f\n",m);
printf("standard deviation= %f",sd);
return 0;
}
