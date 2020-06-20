#include <iostream>

using namespace std;

int main(){
 int t;
 int b,p,f;
 int h,c;
 
 cin>>t;
 
 while(t--){
 	cin>>b>>p>>f>>h>>c;
 	if(h==c)
 	 b/2>=(p+f) ? cout<<(p+f)*h<<'\n' : cout<<(b/2)*h<<'\n';
 	else{
 		if(h>c)
 		 {
 		  if(b/2==p)
 		   cout<<p*h<<'\n';
 		  else 
 		   {
 		   	if(b/2>p)
 		   	{
 		   	if((b/2)-p>=f)
 		   	 cout<<(p*h+f*c)<<'\n';
 		   	else
 		   	 cout<<(p*h+((b/2)-p)*c)<<'\n';
 		   	}
 		   	
 		    else cout<<(b/2)*h<<'\n';
 		   }
 		 }
 		else
 		 {//7 5 2 10 12
 		  if(b/2==f)
 		   cout<<f*c<<'\n';
 		  else 
 		   {
 		   	if(b/2>f)
 		   	{
 		   	if(((b/2)-f)>=p)
 		   	 cout<<(p*h+f*c)<<'\n';
 		   		
 		   	else
 		   	 cout<<(f*c+((b/2)-f)*h)<<'\n';
 		   	}
 		   	
 		    else cout<<(b/2)*c<<'\n';
 		   }
 		 }
 	}
 }
 return 0;
}
 
