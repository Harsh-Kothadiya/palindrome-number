//palindrome number
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,rev=0,a,n1;
	printf("\n\t ENTER A NUMBER : ");
	scanf("%d",&no);
	n1=no;
	while(no>0)
	{
		a=no%10;
		no=no/10;
		rev=(rev*10)+a;
	}
	printf("\n-----OUTPUT-----------------------------\n");
    if(n1==rev)
    {
    	printf("\n\n\t NUMBER IS PALINDROME");
	}
	else
	{
		printf("\n\n\t NUMBER IS NOT PALINDROME");
	}
}
