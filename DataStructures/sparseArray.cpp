#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
int inlen, inlen2 , count=0;
    cin>>inlen;
string arr[inlen] ;
   
    for(int i = 0 ;  i < inlen ; i ++){
        cin>>arr[i] ;
    }
    cin>>inlen2 ;
    string arr1[inlen2] ;
    for(int i = 0 ;  i < inlen2 ; i ++){
        cin>>arr1[i] ;
    }
    
    for(int i = 0 ; i < inlen2 ; i++)
        {for (int j= 0 ; j < inlen ; j++){
            if(arr[j]==arr1[i]){
                count++ ;
            }
           
        }
          cout<<count<<"\n" ;
         count = 0 ;
        
    }
    
    return 0;
}
