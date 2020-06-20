#include <iostream>

using namespace std;

int main() {
	int n;
	int c0=0,c1=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='z')
		  c0++;
		if(s[i]=='n')
		  c1++;
	}
	for(int k=1;k<=c1;k++)
	  cout<<1<<' ';
	for(int j=1;j<=c0;j++)
	  cout<<0<<' ';
 return 0;
}
 
