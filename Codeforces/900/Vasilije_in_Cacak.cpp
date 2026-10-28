#include<bits/stdc++.h>
using namespace std ;

// Problem : 1878C
// Platform : Codeforces 

int main() {
    
    long long t ; 
    cin>>t ; 
    while ( t -- ) {
       long long n , k , x ; 
       cin>>n>>k>>x ; 
       if ( k > n ) {
           cout<<"No"<<endl ;                           
       } else { // k <= n
           long long prefixSum = 0 , suffixSum = 0 ; 
           prefixSum = ( k * ( k + 1 ) ) / 2 ; 
           suffixSum =  ( ( long long )( n * ( n + 1 ) ) / 2 ) - ( ( long long )( ( n - k ) * ( n - k + 1 ) ) / 2 ) ; 
           if ( prefixSum <= x && suffixSum >= x ) {
               cout<<"Yes"<<endl ;                          
           } else {
               cout<<"No"<<endl ;                           
           }
       }
    }
                              
                       
   return 0 ; 
}
