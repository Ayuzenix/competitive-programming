#include<bits/stdc++.h>
using namespace std ;

int main() {
                              
    int t ; 
    cin>>t ; 
    while ( t -- ) {
        long long n , p ; 
        cin>>n>>p ; 
        vector<long long>a( n ) ;
        vector<long long>b( n ) ;
        for ( long long i = 0 ; i < n ; i ++ ) {
             cin>>a[i] ;                          
        }
        for ( long long i = 0 ; i < n ; i ++ ) {
             cin>>b[i] ;                          
        }
        vector<vector<long long>>store ; 
        for ( long long i = 0 ; i < n ; i ++ ) {
             store.push_back( { b[i] , a[i] } ) ;                         
        }
        sort( store.begin() , store.end() ) ; 
        long long score =  p , shared = 1 ;
        for ( long long i = 0 ; i < n ; i ++ ) {
             long long y = store[i][0] ; // y --> price 
             long long x = store[i][1] ; // x --> shared 
             if ( y >= p ) {
                 break ;                           
             } else if ( ( shared + x ) > n ) {
                 score = score + ( long long )( ( n - shared ) * y ) ;   
                 shared = n ; 
             } else {
                 score = score + ( long long )( x * y ) ;
                 shared = shared + x ; 
             }
        }
        score = score + ( long long )( ( n - shared ) * p ) ; 
        cout<<score<<endl ; 
    }
                               
    return 0 ;
}
