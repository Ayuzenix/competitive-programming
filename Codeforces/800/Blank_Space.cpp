#include<bits/stdc++.h>
using namespace std ;

// Problem : 1829B
// Platform : Codeforces

int main() {
                              
    int t ; 
    cin>>t ; 
    while ( t -- ) {
       int n ;
       cin>>n ; 
       vector<int>store( n ) ;
       for ( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ;                         
       }
       int l = 0 , r = 0 , maxLen = 0 ;                           
       while ( r < n ) {
          while ( r < n && store[r] == 0 ) {
                maxLen = max( maxLen , ( r - l + 1 ) ) ;
                r ++ ; 
          }
          l = r + 1 ; 
          r ++ ; 
       } 
       cout<<maxLen<<endl ;
    }
                              
   return 0 ;
}
