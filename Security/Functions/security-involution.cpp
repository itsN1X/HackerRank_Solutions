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
    int count = 0;
    for(i=1;i<=t;i++)
        cin>>a[i];
    for(i=1;i<=t;i++){
        int x = a[i];

        if(a[x] == i)
            count ++;
        else{
            cout<<"NO";
            break;
        }
           
    }
    if(count == t)
       cout<<"YES";
    
    return 0;
}