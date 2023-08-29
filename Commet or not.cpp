#include<stdio.h>
#include<conio.h>
int main()
{
	char c[30];
	int i=2,a=0;
	printf("Enter the sentence:");
	gets(c);
	if(c[0]=='/')
	{
		if(c[1]=='/')
			printf("Its a Comment.");
		else if(c[1]=='*')
		{
			for(i=2;i<=30;i++)
			{
				if(c[0]=='*' && c[i+1]=='/')
				{
					printf("It is comment:");
					a=1;
					break;
				}
				else
					continue;
			}
			if(a==0)
				printf("Not a comment.");
		}
		else
			printf("Not a comment.");
	}
	else
		printf("Not a comment.");
}