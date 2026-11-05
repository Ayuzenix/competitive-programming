#include<bits/stdc++.h>
using namespace std ; 

// Problem : 1475A
// Platform : Codeforces 

int main() {
    
   long long t ; 
   cin>>t ;
   while ( t -- ) {
      long long n ;
      cin>>n ; 
      if ( n % 2 != 0 ) {
          cout<<"Yes"<<endl ;                          
      } else {
          long long sb = 0 ; 
          while ( n > 0 ) {
            long long curr = ( n & ( 1 ) ) ;
            if ( curr != 0 ) {
                sb ++ ;                           
            }
            n = n >> 1 ; 
          }
          if ( sb == 1 ) {
              cout<<"No"<<endl ;                           
          } else {
              cout<<"Yes"<<endl ;                            
          }
      }
   }
                              
   return 0 ; 
}
