#include<bits/stdc++.h>
using namespace std ;

// Problem : 1875A 
// Platform : Codeforces 

int main() {
                              
   long long t ; 
   cin>>t ; 
   while ( t -- ) {
      long long a , b , n ; 
      cin>>a>>b>>n ; 
      vector<long long>store( n ) ;
      for ( long long i = 0 ; i < n ; i ++ ) {
           cin>>store[i] ;                         
      }
      long long curr = 0 ; 
      for ( long long i = 0 ; i < store.size() ; i ++ ) {
           curr = curr + ( b - 1 ) ;
           b = min( ( 1 + store[i] ) , a ) ;
      }
      curr = curr + b ; 
      cout<<curr<<endl ; 
   }
                              
   return 0 ; 
}
