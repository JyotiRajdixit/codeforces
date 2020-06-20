#include <iostream>

using namespace std;

int gcd (int a,int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

 
int main() {
 int a,b,n;
 int move=1;
 
 cin>>a>>b>>n;
 
 while(n){
 	move%2!=0 ? n -= gcd(n,a) : n -= gcd(n,b);
 	move++;
 }
 
 move%2==0 ? cout<<0 : cout<<1;
 
 return 0;
}
 
