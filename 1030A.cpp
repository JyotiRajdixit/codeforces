#include <iostream>
using namespace std;
int main() {
   int n;
   int *arr;
   cin>>n;
   arr= new int[n];
   if((1<=n)&&(n<=100))
   for(int i=0;i<n;i++)
    { 
      cin>>arr[i];
      if(arr[i]==1)
      {cout<<"HARD";
       return 0;}
    }
   cout<<"EASY";
return 0;
}
