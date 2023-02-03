#include<stdio.h>
 int main(){
 	int a,b,c;
 	scanf("%d%d%d",&a,&b,&c);
 	if(a>b&&a>c){
 		printf("%d lon nhat trong 3 so",a);
	 }else if(b>c&&b>a){
	 	printf("%d lon nhat trong 3 so",b);
	 }else{
	 	printf("%d lon nhat trong 3 so",c);
	 }
	 return 0;
 }
