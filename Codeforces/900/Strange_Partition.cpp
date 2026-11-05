#include<bits/stdc++.h>
using namespace std ;

// Problem : 1471A
// Platform : Codeforces 

int main() {
                              
   long long t ; 
   cin>>t ; 
   while ( t -- ) {
     long long n , x ; 
     cin>>n>>x ; 
     vector<long long>store( n ) ;
     long long total = 0 , countnd = 0 , totald = 0 ; 
     for ( long long i = 0 ; i < n ; i ++ ) {
          cin>>store[i] ;  
          if ( ( store[i] % x ) != 0  ) {
              total = total + ( long long )( store[i] / x ) + 1 ; 
              countnd = countnd + ( long long )( store[i] ) ;
          } else {
              total = total + ( long long )( store[i] / x ) ; 
              totald = totald + ( long long )( store[i] / x ) ;
          }
     }
     if ( countnd % x == 0 ) {
         totald = totald + ( long long )( countnd / x ) ;                      
     } else {
         totald = totald + ( long long )( countnd / x ) + 1 ;                      
     }
     cout<<totald<<" "<<total<<endl ; 
   }
                              
   return 0 ; 
}
