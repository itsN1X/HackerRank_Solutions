#include <stdio.h>

int main()
{
	int k,n;
	int a,b,c,d;
    scanf("%d %d",&n,&k);
    a = n%k;
    b = n/k;
//    printf("%d %d",a,b);
    c = k -a;
//    printf("\n%d",c);
    d = c % 2;
//    printf("\n%d",d);
    if(d == 0){
    	printf("%d",b);
    	
	}
    return 0;
}

