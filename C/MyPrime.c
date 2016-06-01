#include<stdio.h>
int main(){
	int n,i,B[n];
	int *A;
	scanf("%d",&n);
	A  = malloc(n * sizeof(int));



	for(i=0;i<n;i++){
		scanf("%d",&B[i]);
		A[i] = B[i];
		printf("%d",A[i]);
//		printf("%d",A[i]%n);	
	}
//	for(i=0;i<n;i++){
//		if((A[i]%n)!=0 || (A[i] == n)){
//			printf("%d ",A[i]);	
//		}
//	}
//	for(i=0;i<n;i++){
//		printf("%d",A[i]);
//	}
	return 0;
}
