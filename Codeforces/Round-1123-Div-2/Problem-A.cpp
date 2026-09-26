#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin>>t ;
    while ( t -- ) {
     int coin = 0 ;
     int n ;
     char c ;
     cin>>n ;
     cin>>c ;
     string str ;
     cin>>str ;
     int l = 0 , r = n - 1 ; 
     while ( l < r ) {
        if ( str[l] == str[r] ) {
            l ++ ;
            r -- ;
        } else if ( str[l] == c || str[r] == c ) {
           coin ++ ;
           l ++ ;
           r -- ;
        } else {
           coin = coin + 2 ; 
           l ++ ;
           r -- ;
        }
     }
     cout<<coin<<endl ;
    }
    return 0 ;
}
