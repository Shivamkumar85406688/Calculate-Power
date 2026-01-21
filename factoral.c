#include<stdio.h>
int main(){
	int n,factorial = 1, i = 1;
	printf("Enter your number:");
	scanf("%d",&n);
	if(n<0){
		printf("Error");
	}else{
		while(i<=n){
			factorial *=i;
			i++;
		}
		printf("%d ",factorial);
    }
	return 0;
}

