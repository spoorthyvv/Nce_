#include<stdio.h>
#include<string.h>

int remove_zero(int n)
{
int dummy,num=0;
while(n>0)
{
dummy=n%10;
n=n/10;
if(dummy!=0)
{
num = num*10+dummy;
}
}
//re reverse the numbers because the above algorithm returns the no in reverse.
n=num;
num=0;
while(n>0)
{
dummy=n%10;
n=n/10;
num=num*10+dummy;
}
return num;
}

int main()
{
int a[4],an[4],i,sum=0,d=0;
printf("Input\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		an[i]=remove_zero(a[i]);
	}
sum = an[0]+an[1]+an[2];
d = an[3];
if(sum==d)
{
	printf("\nValid");
}
else
{
	printf("\nIn valid");
}
}
