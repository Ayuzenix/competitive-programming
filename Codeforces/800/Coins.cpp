#include<bits/stdc++.h>
using namespace std ;

// Problem : 1814A
// Platform : Codeforces 

int main() {
    
    long long t ; 
    cin>>t ; 
    while ( t -- ) {
      long long n , k ; 
      cin>>n>>k ; 
      if ( n % 2 == 0 ) {
          cout<<"yes"<<endl ;
      } else {
        if ( k % 2 != 0 ) { // when k is odd 
           if ( ( n - k ) >= 0 ) {
             cout<<"yes"<<endl ;
           } else {
             cout<<"no"<<endl ; 
           }
        } else { // k is even 
            cout<<"no"<<endl ;
        }
      }
    }

    return 0 ;
}
