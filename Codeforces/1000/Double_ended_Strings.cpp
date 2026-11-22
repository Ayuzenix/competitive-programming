#include<bits/stdc++.h>
using namespace std ;

// Problem : 1506C 
// Platform : Codeforces 

int main() {
    
    int t ;
    cin>>t ; 
    while ( t -- ) {
       string a , b ;
       cin>>a ; 
       cin>>b ; 
       unordered_map<string,pair<int,int>>mp ; 
       int maxDeletions = INT_MAX ; 
       if ( a.size() <= b.size() ) {
           for ( int i = 0 ; i < a.size() ; i ++ ) {
                string str = "" ;
                for ( int j = i ; j < a.size() ; j ++ ) {
                     str = str + a[j] ;
                     mp[str] = { i , j } ; 
                }
           }
           for ( int i = 0 ; i < b.size() ; i ++ ) {
                string str = "" ;
                for ( int j = i ; j < b.size() ; j ++ ) {
                     str = str + b[j] ;
                     if ( mp.find( str ) != mp.end() ) {
                         int currDeletions = ( mp[str].first - 0 ) + ( a.size() - mp[str].second - 1 ) + ( i - 0 ) + ( b.size() - j - 1 ) ;     
                         maxDeletions = min( maxDeletions , currDeletions ) ;
                     }
                }
           }
       } else {
           for ( int i = 0 ; i < b.size() ; i ++ ) {
                string str = "" ;
                for ( int j = i ; j < b.size() ; j ++ ) {
                     str = str + b[j] ;
                     mp[str] = { i , j } ; 
                }
           } 
           for ( int i = 0 ; i < a.size() ; i ++ ) {
                string str = "" ;
                for ( int j = i ; j < a.size() ; j ++ ) {
                     str = str + a[j] ;
                     if ( mp.find( str ) != mp.end() ) {
                         int currDeletions = ( mp[str].first - 0 ) + ( b.size() - mp[str].second - 1 ) + ( i - 0 ) + ( a.size() - j - 1 ) ;     
                         maxDeletions = min( maxDeletions , currDeletions ) ;
                     }
                }
           } 
       }
       if ( maxDeletions == INT_MAX ) {
           maxDeletions = ( a.size() + b.size() ) ;
       }
       cout<<maxDeletions<<endl ; 
    }
                              
    return 0 ; 
}
