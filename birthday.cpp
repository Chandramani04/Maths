// find min no of people present in a hall so that there is 50% chance of having 
// two people  same birhtday ?? 
  
  #include <bits/stdc++.h> 
  using namespace std;
  
/* approach will be 
first calculate probability of no person having same birthday letsay x ;
then ans = 1-x ; */

  int main() {

    float p = 1.0 ;   // probability of having  no people same  birhtday  : 365/365 = 1 ; 
    float ask ; // enter probability you want for having atleast two person having same birhtday 
    cin >> ask ; 
    float people = 0 ; // no of people in the room 
    float num = 365 ;
    float denominator= 365 ; 

    // corner case
    if (ask == 1) {
        cout << "365" ;
        return 0 ; }
    while (p > 1-ask){
        p = p* (num)/denominator ; // the previous probability vaule will get stored automatic
        num -- ; 
        people ++ ;
    cout << " the no people is : " << people << "at the probability : " << p  << endl;  
    }

 cout << "the final no of least people reqired is : " << people  << endl; 
    return 0;
  }