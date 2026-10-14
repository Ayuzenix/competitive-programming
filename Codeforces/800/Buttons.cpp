#include<bits/stdc++.h>
using namespace std ;

// Problem : 1858A 
// Platform : Codeforces 

int main() {
   
    int t ;
    cin>>t ; 
    while ( t -- ) {
      int a , b , c ;
      cin>>a>>b>>c ;
      int left = a , right = b ; 
      if ( c % 2 == 0 ) {
          left = left + ( c / 2 ) ;
          right = right + ( c / 2 ) ;
      } else {
          left = left + ( c / 2 ) + 1 ; 
          right = right + ( c / 2 ) ;
      }
      if ( left <= right ) {
          cout<<"Second"<<endl ;                           
      } else {
          cout<<"First"<<endl ;                          
      }                           
    }
                             
   return 0 ;
}
