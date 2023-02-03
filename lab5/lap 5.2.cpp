#include<stdio.h>
 int namnhuan(){
 	int y;
 	scanf("%d",&y);
 	int flag=0;
 	if((y%400==0||y%4==0)&&(y%100!=0)){
 		flag =1;
	 }
	 if(flag==1){
	 	printf("%d nam nhuan",y);
	 }
	 else{
	 	printf("%d nam khong nhuan",y);
	 }
	 
	 return 0;
	 
 }
 int main(){
 	namnhuan();
 }
