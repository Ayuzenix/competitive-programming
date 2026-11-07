#include<bits/stdc++.h>
using namespace std ;

// Problem : 1374B
// Platform : Codeforces 

int main() {
     
    int t ; 
    cin>>t ; 
    while ( t -- ) {
       int count = 0 , n ; 
       cin>>n ; 
       while ( n != 1 ) {
          if ( n % 2 == 0 && ( n % 6 ) != 0 ) {
              break ;                           
          }
          if ( ( n % 2 ) != 0 ) { 
              n = n * 2 ; 
              count ++ ; 
          } else {
             n = n / 6 ;   
             count ++ ; 
          }
                                  
          }
          if ( n == 1 ) {
              cout<<count<<endl ;                           
          } else {
              cout<<-1<<endl ;                          
          }
      }                         
                              
    return 0 ;
}
