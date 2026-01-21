#include<stdio.h>
int main()
{
	int n;
	printf("Enter your number:");
	scanf("%d",&n);
	if(n==1)
	printf("JANUARY");
	else if(n==2)
	printf("FEBURARY");
	else if(n==3)
	printf("MARCH");
	else if(n==4)
	printf("APRIL");
	else if(n==5)
	printf("MAY");
    else if(n==6)
    printf("JUNE");
    else if(n==7)
	printf("JULY");
    else if(n==8)
    printf("AUGUST");
    else if(n==9)
	printf("SEPTEMBER");
    else if(n==10)
    printf("OCTUBER");
    else if(n==11)
	printf("NOVEMBER");
    else if(n==12)
    printf("DECEMBER");
    else
    printf("invalid number");
    return 0;
}
