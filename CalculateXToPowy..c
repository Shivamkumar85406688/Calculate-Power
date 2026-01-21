#include<stdio.h>
int main(){
	int counter=1,x,y,product=1;
	printf("Enter a base(x):");
	scanf("%d",&x);
	printf("Enter a power(y):");
	scanf("%d",&y);
	while(counter<=y){
	product= product*x;
	counter = counter+1;
}
printf("%d\n",product);

return 0;
	
}
