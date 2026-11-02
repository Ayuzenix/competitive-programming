#include<bits/stdc++.h>
using namespace std ; 

// Problem : Array Cloning Technique
// Platform : Codeforces 

int main() {
    
    long long t ;
    cin>>t ; 
    while ( t -- ) {
       long long n ;
       cin>>n ; 
       vector<long long>store( n ) ;
       for ( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ;                         
       }
       map<long long,long long>mp ; 
       for ( int i = 0 ; i < n ; i ++ ) {
            mp[store[i]] ++ ;                         
       }
       long long maxi = 1 ; 
       for ( auto &it:mp ) {
            maxi = max( maxi , it.second ) ;                      
       }
       long long rem = ( n - maxi ) , operations = 0 ;
       while ( rem > 0 ) {
           operations ++ ;  
           maxi = ( long long )( 2 * maxi ) ;
           operations = operations + min( ( long long )rem , ( long long )( maxi / 2 ) ) ;
        
           long long mini = min( rem , ( maxi / 2 ) ) ;
           rem = rem - mini ; 
       }
       cout<<operations<<endl ;
    }
                              
   return 0 ; 
}
