#include<bits/stdc++.h>
using namespace std ;

// Problem : 1704B
// Platform : Codeforces 

int main() {
                              
    int t ;
    cin>>t ; 
    while ( t -- ) {
       int n , x ; 
       cin>>n>>x ; 
       vector<int>store( n ) ;
       for ( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ;                          
       }
       int l = 0 , r = 0 , count = 0 , mini = store[0] , maxi = INT_MIN ; 
       while ( r < n ) {
           maxi = max( maxi , store[r] ) ;
           mini = min( mini , store[r] ) ;
           int diff = ( maxi - mini ) ;
           if ( diff > ( 2 * x ) ) {
               count ++ ; 
               l = r ; 
               mini = store[r] ;
               maxi = store[r] ;
           }
           r ++ ; 
       }
       if ( ( maxi - mini ) > ( 2 * x ) ) {
           count ++ ;                           
       }  
       cout<<count<<endl ; 
    }
    
    return 0 ; 
}
