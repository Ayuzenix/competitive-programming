#include<bits/stdc++.h>
using namespace std ;

// Problem : 1380A
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
       vector<vector<int>>ltr( n , vector<int>(2) ) ;
       vector<vector<int>>rtl( n , vector<int>(2)) ;
       int mini = store[0] , idx = 0 ; 
       for ( int i = 0 ; i < n ; i ++ ) {
            ltr[i][0] = mini ;
            ltr[i][1] = idx ; 
            // mini = min( mini , store[i] ) ;
            if ( store[i] < mini ) {
                mini = store[i] ;
                idx = i ; 
            }
       }
       mini = store[n-1] , idx = n - 1 ; 
       for ( int i = n - 1 ; i >= 0 ; i -- ) {
            rtl[i][0] = mini ;
            rtl[i][1] = idx ; 
            // mini = min( mini , store[i] ) ;
            if ( store[i] < mini ) {
                mini = store[i] ;
                idx = i ; 
            }
       }
       bool gama = false ; 
       int p , q , r ;  
       for ( int i = 1 ; i < n - 1 ; i ++ ) {
            if ( store[i] > ltr[i][0] && store[i] > rtl[i][0] ) {
                gama = true ; 
                p = ltr[i][1] , q = i , r = rtl[i][1] ;
                break ; 
            }                          
       }
       if ( gama == true ) {
           cout<<"Yes"<<endl ;  
           cout<<( p + 1 )<<" "<<( q + 1 )<<" "<<( r + 1 )<<endl ;                         
       } else {
           cout<<"No"<<endl ;                            
       }
    }
                              
    return 0 ; 
}
