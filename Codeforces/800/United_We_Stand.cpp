#include<bits/stdc++.h>
using namespace std ;

// Problem : 1859A
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
       sort( store.begin() , store.end() ) ;
       vector<int>a ;
       vector<int>b ;
       int i = 1 ; 
       a.push_back( store[0] ) ;
       while ( i < store.size() && store[i] == store[i-1] ) {
            a.push_back( store[i] ) ;                         
            i ++ ;                         
       }
       for ( int k = i ; k < n ; k ++ ) {
            b.push_back( store[k] ) ;                         
       }
       if ( a.size() == 0 || b.size() == 0 ) {
           cout<<-1<<endl ;                       
       } else {
          cout<<a.size()<<" "<<b.size()<<endl ;
          for ( int i = 0 ; i < a.size() ; i ++ ) {
               cout<<a[i]<<" " ;                         
          }
          cout<<endl ;
          for ( int i = 0 ; i < b.size() ; i ++ ) {
              cout<<b[i]<<" " ;                         
          }
          cout<<endl ;
       }
    }
                             
   return 0 ;
}
