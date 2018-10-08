#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		int a,b ,c;
		
		cin>>a>>b>>c;
		
		if(a>b &&a<c || a>c && a<b)
			cout<<"Case "<<i<<": "<<a<<endl;
			
		else if(b>a && b<c || b>c && b<a)
			cout<<"Case "<<i<<": "<<b<<endl;
			
		else if(c>a && c<b || c>b && c<a)
			cout<<"Case "<<i<<": "<<c<<endl;
		
		
	}
	
	return 0;
}
		
