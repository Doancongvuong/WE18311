#include<stdio.h>

 main(){
 	int n;
 	scanf("%d",&n);
 	int a[100];
 	for(int i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 
	 float sum=0,tb;
	 int dem=0;
	for(int i=0;i<n;i++){
	 	if(a[i]%3==0){
	 		sum+=a[i];
	 		dem++;
		 }
	 }
	 tb=sum/dem;
	 printf("%.1f",tb);
 }
