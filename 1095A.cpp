#include <iostream>
#include <math.h>

using namespace std;

int main() {
 int n,x;
 string s;
 
 cin>>n>>s;
 
 x=(-1+sqrt(1+8*n))/2;
 
 for(int i=1;i<=x;i++)
  cout<<s[i*(i-1)/2];
 
 return 0;
}
 
