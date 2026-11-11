#include<bits/stdc++.h>
using namespace std ;

// Problem : 1859B 
// Platform : Codeforces 

int main() {
     
    long long t ;
    cin>>t ; 
    while ( t -- ) {
       long long n ;
       cin>>n ;
       vector<vector<long long>>store ; 
       while ( n -- ) {
         long long m ; 
         cin>>m ; 
         vector<long long>curr( m ) ;
         for ( long long i = 0 ; i < m ; i ++ ) {
              cin>>curr[i] ; 
         }
         sort( curr.begin() , curr.end() ) ;
         long long maxi , mini ; 
         if ( curr.size() == 1 ) {
             maxi = curr[0] , mini = curr[0] ;                           
         } else {
             maxi = curr[1] , mini = curr[0] ;                           
         }
         store.push_back( { maxi , mini } ) ;
       }
       sort( store.begin() , store.end() ) ;
       long long ans = 0 , mini = INT_MAX ;  
       for ( long long i = 1 ; i < store.size() ; i ++ ) {
            ans = ans + store[i][0] ;  
            mini = min( mini , store[i][1] ) ;
       }
       ans = ans + min( mini , store[0][1] ) ;
       cout<<ans<<endl ; 
    }
                              
    return 0 ; 
}
