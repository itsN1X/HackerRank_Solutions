#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    int a0;
    
    scanf("%d",&t);
    int n[t];
    for( a0 = 0; a0 < t; a0++){
        
        scanf("%d",&n[a0]);
    }
    int i;
    for( i=0;i<t;i++){
    	int count =0;
    	int b;
        b =n[i];
        while (n[i]) {
        	int rem;
            rem = n[i] % 10;
            if (rem!=0 && b%rem==0)
                count++;
            
             n[i] = n[i] / 10;
            
         }
        printf("%d\n",count);
    }
    return 0;
}

