#include<bits/stdc++.h>
using namespace std ;

// Problem : 1543A
// Problem : Codeforces 

int main() {
   
   long long t ; 
   cin>>t ; 
   while( t -- ) {
      long long a , b ; 
      cin>>a>>b ; 
      long long diff = abs( a - b ) ;
      if ( ( a == b ) ) {
          cout<<0<<" "<<0<<endl ; 
      } else {
        if ( ( a == 0 ) || ( b == 0 ) ) {
             cout<<diff<<" "<<0<<endl ; 
        } else {
            long long f1 = ( diff - ( b % diff ) ) ; // in case if i do add some in b to maximize gcd 
            long long f2 = ( b % diff ) ; // in case if i do minus some from b to maximize gcd 
            cout<<diff<<" "<<min( f1 , f2 )<<endl ; 
        }
      }
                                                            
   }
                              
   return 0 ; 
}
