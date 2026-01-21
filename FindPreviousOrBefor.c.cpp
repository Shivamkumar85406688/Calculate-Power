#include<stdio.h>
int main(){
	int d1,m1,y1,d2,m2,y2,F;
	printf("Enter a second day:");
	scanf("%d",&d1);
	printf("Enter a first month:");
	scanf("%d",&m1);
	printf("Enter a first year:");
	scanf("%d",&y1);
	printf("Enter a second day:");
	scanf("%d",&d2);
	printf("Enter a second month:");
	scanf("%d",&m2);
	printf("Enter a second year:");
	scanf("%d",&y2);
	
   if(y1>y2){
   F = 1;
 }else if(y2>y1){
 	F = 2;
 }else{
 	if(m1>m2){
 		F = 1;
	 }else if(m2>m1){
	 	F = 2;
	 }else{
	 	if(d1>d2){
	 		F = 1;
		 }else if(d2>d1){
		     F = 2;
		 }else{
		 	F = 0;
		 }
	 }
 }
   if(F==1){
   	printf("Date first is greater then Date second\n");
   }else if(F==2){
   	printf("Date second is greater then Date first\n");
   }else{
   	printf("Both are equal");
   }
   return 0;
}
