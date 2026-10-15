#include<bits/stdc++.h>
using namespace std ;

// Problem : 1845A 
// Platform : Codeforces 

int main() {
    
    int t ; 
    cin>>t ; 
    while ( t -- ) {
      int n , k , x ; 
      cin>>n>>k>>x ; 
      if ( x != 1 ) {
          cout<<"Yes"<<endl ;
          cout<<n<<endl ; // total Number of Integer taken
          for ( int i = 1 ; i <= n ; i ++ ) { // shows taken Integer
              cout<<1<<" " ;                           
          }
          cout<<endl ;
    } else { // x == 1 
       if ( k == 1 ) {
              cout<<"No"<<endl ;                           
       } else if ( k == 2 ) {
          if ( n % 2 == 0 ) {
              cout<<"Yes"<<endl ;
              int x = ( n / 2 ) ;
              cout<<x<<endl ; // total Number of Integer taken 
              for ( int i = 0 ; i < x ; i ++ ) { // shows taken Integer 
                  cout<<2<<" " ;                             
              }
              cout<<endl ;
          } else {
              cout<<"No"<<endl ;                          
          }                           
       } else { // k > 2 
          if ( ( n % 2 ) == 0 ) {
              cout<<"Yes"<<endl ;
              int x = ( n / 2 ) ; 
              cout<<x<<endl ; // total Number of Integer taken 
              for ( int i = 0 ; i < x ; i ++ ) { // shows taken Integer 
                  cout<<2<<" " ;                             
              }
              cout<<endl ;
          } else {
            cout<<"Yes"<<endl ;
            int right = 1 ; 
            n = n - 3 ; 
            int left = ( n / 2 ) ;
            cout<<( right + left )<<endl ; // total Number of Integer taken 
            for ( int i = 0 ; i < left ; i ++ ) { // shows taken Integer 
                 cout<<2<<" " ;                         
            }
            cout<<3<<endl ;
          }                           
       }                    
    } 
    }
   return 0 ;
}
