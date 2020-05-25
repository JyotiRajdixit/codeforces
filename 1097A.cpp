#include <iostream>
#include <string>
using namespace std;
int main() {
   string tab;
   string str;
   
   getline(cin,tab);
   
   getline(cin,str); 
   
   for(int i=0;i<str.size();i++)
     if((tab[0]==str[i])||(tab[1]==str[i]))
      {
       cout<<"YES";
       return 0;
      }
   cout<<"NO";
return 0;
}
