#include <iostream>

using namespace std;

int main() {
  int n[4];
  int cal=0;
  string s;
  
  for(int i=0;i<4;i++)
   cin>>n[i];
  
  cin>>s;
  
  for(int j=0;j<s.size();j++)
  	cal+=n[s[j]-'0'-1];
  
  cout<<cal;
 return 0;
}
 
