#include <iostream>

using namespace std;

int main() {
	int t;
	long long int pos;
	long long int a, b,k;

	cin>>t;
	while(t--)
	{
		pos=0;
		
		cin>>a>>b>>k;
		
		k%2==0 ? cout<<(a-b)*(k/2)<<'\n' : cout<<((a-b)*(k/2))+a<<'\n';
	}
 return 0;
}
 
