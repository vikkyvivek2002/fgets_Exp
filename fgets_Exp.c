#include<stdio.h>
int main()
{
	
	char s[20] ;
	printf("Enter the string :");
	fgets(s,20,stdin);
	printf("the entered string = ");
	puts(s);
	return 0;
}