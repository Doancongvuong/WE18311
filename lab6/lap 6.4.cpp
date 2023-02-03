#include<stdio.h>
main(){
	
	int arr[100][100];
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);	
		}
	}
	printf("in ra mang hinh: \n");
	for(int i=0;i<n;i++){
	 	for(int j=0;j<m;j++){
	 	arr[i][j]=arr[i][j]*arr[i][j];
		 printf("arr[%d][%d] = %d \t", i,j,arr[i][j]);	
		 }	
	}
	return 0;	
}



