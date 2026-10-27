#include<bits/stdc++.h>
using namespace std ;

// Problem : 1777A 
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
       int l = 0 , r = 0 , op = 0 ; 
       while ( r < n ) {
          while ( r < n && ( store[r] % 2 == store[l] % 2 ) ) {
             r ++ ;                             
          } 
          int length = ( r - l ) ;
          op = op + ( length - 1 ) ;
          l = r ;
          r ++ ; 
       }
       cout<<op<<endl ;
   }
   
   return 0 ;
}
