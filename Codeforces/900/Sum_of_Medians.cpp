#include<bits/stdc++.h>
using namespace std ;

// Problem : 1440B
// Platform : Codeforces 

int main() {
   
   long long t ;
   cin>>t ; 
   while ( t -- ) {
     long long n , k ; 
     cin>>n>>k ; 
     vector<long long>store( n * k ) ;
     for ( long long i = 0 ; i < store.size() ; i ++ ) {
          cin>>store[i] ;
     }
     long long md ; 
     if ( n % 2 == 0 ) {
        md = ( n / 2 ) - 1 ; 
     } else {
        md = ( n / 2 ) ;
     }
     long long len = ( n - md ) , sum = 0 ; 
     for ( long long i = store.size() - 1 ; i >= 0 ; i -- ) {
          if ( ( store.size() - i ) % len == 0 && k > 0 ) {
              sum = sum + ( long long )store[i] ;
              k -- ; 
          }
     }
     cout<<sum<<endl ;
   }
                              
   return 0 ; 
}
