#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,i,j;
    cin>>t;
    int a[t];
    int count = 1;
    for(i=0;i<t;i++)
        cin>>a[i];
    for(i=0;i<t;i++){
        int x = i+1;
        for(j=0;j<t;j++){
            if(a[j] == x)
               cout<<j+1<<endl;
        }
    }
    
    
    return 0;
}