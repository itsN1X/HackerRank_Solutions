#include<stdio.h>
int main(){
	int n,sum =0;
	scanf("%d",&n);
	
	while(n>0){
		n = n/(5);
		sum = sum + n;
	}
	printf("%d",sum);
	return 0;
}
