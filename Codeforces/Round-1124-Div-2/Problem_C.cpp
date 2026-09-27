#include<bits/stdc++.h>
using namespace std ;

// Problem : K Is Important 

int main() {
    
    long long t ;
    cin>>t ;
    while ( t -- ) {
        long long n , k ; 
        cin>>n>>k ;
        vector<long long>store( n ) ;
        for ( int i = 0 ; i < n ; i ++) {
             cin>>store[i] ;                          
        }
        long long totalScore = 0 , l = ( k - 1 ) , r = ( n - k ) , currSize = n ;
        while ( currSize >= k ) {
            while ( l < n && store[l] == -1 ) {
                   l ++ ;                        
            }
            while ( r >= 0 && store[r] == -1 ) {
                   r -- ;                        
            }
            if ( l < n && r >= 0 && store[l] > store[r] ) {
                totalScore = totalScore + store[l] ;
                store[l] = -1 ;
                if ( l < r ) {
                    l ++ ;                           
                } else {
                   l ++ ;
                   r -- ;
                }
            } else if ( l < n && r >= 0 && store[l] == store[r] ) {
                 totalScore = totalScore + store[l] ;
                 store[l] = -1 ;
                 if ( l < r ) {
                     l ++ ;                           
                 } else {
                     l ++ ;
                     r -- ;
                 }
            } else {
                if ( l < n && r >= 0 ) {                           
                totalScore = totalScore + store[r] ;    
                store[r] = -1 ;
                if ( r > l ) {
                    r -- ;                           
                } else {
                    r -- ;
                    l ++ ;
                }
                }
            }
            currSize -- ;
        }  
        cout<<totalScore<<endl ;
    }

    return 0 ;
}
