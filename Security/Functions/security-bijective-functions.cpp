#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,i;
    cin>>t;
    int a[t];
    int count = 1;
    for(i=0;i<t;i++)
        cin>>a[i];
    //sorting
    sort(a,a+t);
    
    
    for(i=0;i<t;i++){
        if(a[i] == (i+1))
            count++;
        else
            {
             cout<<"NO";
             break;
        }     
    }
    if(count == t+1)
        cout<<"YES";
    
    return 0;
}
