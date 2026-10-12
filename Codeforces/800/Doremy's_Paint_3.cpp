#include<bits/stdc++.h>
using namespace std ;

// Problem : Doremy's Paint
// Platform : Codeforces

int main() {
   int t ; 
   cin>>t ;
   while ( t -- ) {
       int n ;
       cin>>n ;
       vector<int>store( n ) ;
       unordered_map<int,int>mp ;
       for ( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ;  
            mp[store[i]] ++ ;
       }
       if ( mp.size() == 1 ) {
           cout<<"Yes"<<endl ;                          
       } else if ( mp.size() == 2 ) {
           vector<int>arr ; 
           for ( auto &it:mp ) {
                arr.push_back( it.second ) ;                           
           }
           if ( arr[0] == arr[1] || ( abs( arr[1] - arr[0] ) == 1 ) ) {
               cout<<"Yes"<<endl ;                          
           } else {
               cout<<"No"<<endl ;                          
           }
       } else {
              cout<<"No"<<endl ;                       
       }                        
                                 
   }
   return 0 ;
}
