#include <iostream>

using namespace std;
int main() {
   string num;
   int count=0;
   cin>>num;
   for(int i=0;i<num.size();i++)
   	if((num[i]=='4')||(num[i]=='7'))
   	  count++;
 
   if((count==4)||(count==7))
       cout<<"YES";
   else
       cout<<"NO";
return 0;
}
d
