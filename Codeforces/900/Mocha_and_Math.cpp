#include<bits/stdc++.h>
using namespace std ; 

// Problem : Mocha and Math 
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
        int ans = store[0] ;
        for ( int i = 1 ; i < n ; i ++ ) {
             ans = ( ans & store[i] ) ;                         
        }
        cout<<ans<<endl ; 
    }
                              
   return 0 ; 
}
