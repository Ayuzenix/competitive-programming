#include<bits/stdc++.h>
using namespace std ; 

// Problem : 1766A
// Platform : Codeforces 

int main() {
                              
   long long t ; 
   cin>>t ; 
   while ( t -- ) {
      long long n ;
      cin>>n ; 
      string str = to_string( n ) ;
      int size = str.size() , curr = 1 , totalCount = 0 ; 
      while ( curr < size ) {
         totalCount = totalCount + 9 ; 
         curr ++ ; 
      }
      totalCount = totalCount + ( str[0] - '0' ) ;
      cout<<totalCount<<endl ; 
      }
                              
   return 0 ; 
}
