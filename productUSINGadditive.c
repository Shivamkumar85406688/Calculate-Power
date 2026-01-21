#include<stdio.h>
int main()
{
	int counter=1,md,mr,product=0;
	printf("Enter a multiplier(mr):");
	scanf("%d",&mr);
	printf("Enter a multiplicand(md):");
	scanf("%d",&md);
	while(counter<=md)
	{
		product= product+mr;
		counter = counter+1;
	}
	printf("%d\n",product);

return 0;	
}
