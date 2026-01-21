#include<stdio.h>
int main(){
	int n,upd,tpd;
	printf("Enter your number:");
	scanf("%d",&n);
	if(n>=-99&&n<100){
		if(n==0)
		n=n*-1;
		if(n>=0&&n<=19){
			if(n==0)printf("ZERO");
			else if(n==1)printf("one");
			else if(n==2)printf("TWO");
			else if(n==3)printf("THREE");
			else if(n==4)printf("FOUR");
			else if(n==5)printf("FIVE");
			else if(n==6)printf("SIX");
			else if(n==7)printf("SEVEN");
			else if(n==8)printf("EIGHT");
			else if(n==9)printf("NINE");
			else if(n==10)printf("TEN");
			else if(n==11)printf("ELEVEN");
			else if(n==12)printf("TWELVE");
			else if(n==13)printf("THIRTEEN");
			else if(n==14)printf("FOURTEEN");
			else if(n==15)printf("FIFTEEN");
			else if(n==16)printf("SIXTEEN");
			else if(n==17)printf("SEVENTEEN");
			else if(n==18)printf("EIGHTEEN");
			else if(n==19)printf("NINTEEN");
			}
			else
			{
				upd=n%10;
				tpd=n/10;
				if(tpd==2)printf("TWENTY");
				else if(tpd==3)printf("THIRTY");
				else if(tpd==4)printf("FOURTY");
				else if(tpd==5)printf("FIFTY");
				else if(tpd==6)printf("SIXTY");
				else if(tpd==7)printf("SEVENTY");
				else if(tpd==8)printf("EIGHTY");
				else if(tpd==9)printf("NINETY");
				
				printf(" ");
				
				if(upd==1)printf("ONE");
				else if(upd==2)printf("TWO");
				else if(upd==3)printf("THREE");
				else if(upd==4)printf("FOUR");
				else if(upd==5)printf("FIVE");
				else if(upd==6)printf("SIX");
				else if(upd==7)printf("SEVEN");
				else if(upd==8)printf("EIGHT");
				else if(upd==9)printf("NINE");
				}
			}
				else
					printf("invalid number");
	return 0;
}
