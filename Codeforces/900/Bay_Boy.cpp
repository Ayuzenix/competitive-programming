#include<bits/stdc++.h>
using namespace std ;

// Problem : 1537B
// Platform : Codeforces 

int main() {
                              
    int t ;
    cin>>t ; 
    while ( t -- ) {
      int n , m , i , j ;
      cin>>n>>m>>i>>j ;
      int left = ( j - 1 ) , right = ( m - j ) ;
      if ( left <= right ) { // means right is bigger 
          cout<<1<<" "<<m<<" "<<n<<" "<<1<<endl ;                           
      } else { // means left is bigger 
          cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl ;                         
      }
    }
 
   return 0 ; 
}
