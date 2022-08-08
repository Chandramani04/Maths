#include <bits/stdc++.h> 
using namespace std;
 /* Q: find a^n faster 
  ANS -> recursive solution 
  if n is odd then do :  a(a^n/2)^2 ; 
  if n is even then do : (a^n/2)^2 ;

*/

int findpower(int a, int  n){

if (n==0)return 1 ; // a^0 = 1 ; 

// check if n is odd
int subproblem = findpower(a,n/2) ; 
if (n&1){
    return a*subproblem*subproblem ; 
}

else {    //  n :even case
 return  subproblem*subproblem ;  
}

}
int main() {
    
    int a , n ; 
    cin >> a >> n ; 
    cout << findpower(a , n ) ;

    return 0;
}