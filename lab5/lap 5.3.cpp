
#include<stdio.h>

 void swaps(int a,int b){
 	int hoanvi=a;
 	a=b;
 	b=hoanvi;
 	printf("\n hoan vi:\n%d\n",a);
 	printf("%d\n",b);
 	
 }
 int main(){
 	int a,b;
 	scanf("%d%d",&a,&b);
 	swaps(a,b);
 	return 0;
 	
 }
