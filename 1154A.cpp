#include <iostream>

using namespace std;

int main() {
   int arr[4];
   int max,index;
  
   for(int I=0;I<4;I++)
   {
    cin>>arr[I];
    if((max<arr[I])||(I==0))
     { 
       max=arr[I];
       index=I;
     }
   }

   for(int j=0;j<4;j++)
    if(j!=index)
     cout<<arr[index]-arr[j]<<" ";

return 0;
}
