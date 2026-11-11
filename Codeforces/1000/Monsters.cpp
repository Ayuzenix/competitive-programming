#include<bits/stdc++.h>
using namespace std ; 

// Problem : 1849B 
// Platform : Codeforces 

int main() {
    
    int t ;
    cin>>t ; 
    while( t -- ) {
       int n , k ;
       cin>>n>>k ; 
       vector<int>store( n ) ; 
       for ( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ;                          
       }
       vector<vector<int>>curr ; 
       for ( int i = 0 ; i < n ; i ++ ) {
            int rem = ( store[i] % k ) ; 
            if ( rem == 0 ) {
                rem = k ;                           
            }
            curr.push_back( { rem , i } ) ; 
       }
       sort( curr.begin() , curr.end() , []( auto &a , auto &b ) {
            if ( a[0] == b[0] ) {
                return a[1] < b[1] ;                          
            }
            return a[0] > b[0] ; 
       }) ;
       for ( int i = 0 ; i < curr.size() ; i ++ ) {
            cout<<curr[i][1] + 1<<" " ;                         
       }
       cout<<endl ; 
    }
                              
    return 0 ; 
}
