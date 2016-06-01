#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n],small;
    int arr_i,i,count;
    for(arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    printf("%d\n",n);
    do{
        small = arr[0];
        count =0;
        for(i =1;i<n;i++){
            if(arr[i] < small && (arr[i] > 0) ){
                small = arr[i];
            }
        }
        if(small == 0)
        break;
//        printf("%d == small \n ",small);
        for(i=0;i<n;i++){
//        	printf("%d ",arr[i]);
        	
		}
//		printf("\t");
//        printf("%d\n",small);
        for( i=0;i<n;i++){
            arr[i] = arr[i] - small;
        }
        for( i=0;i<n;i++){
            if(arr[i] > 0){
                count ++;
            }
        }
        printf("%d\n",count);
        
    }while(small > 0);
    
    
    return 0;
}

