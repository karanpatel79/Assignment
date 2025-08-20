#include<stdio.h>
#include<conio.h>

int main()
{
	int n,t1=0,t2=1,nextterm;
	clrscr();
	printf("Enter the number of terms: ");
	scanf("%d",&n);

	printf("\nFibonacci serise: ");
	for(int i = 1;i<=n;i++)
	{
		printf("%d ",t1);
		nextterm = t1+t2;
		t1=t2;
		t2 = nextterm;
	}
	return 0;
}