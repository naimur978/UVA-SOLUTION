#include <bits/stdc++.h>

using namespace std;

int n,p,a[100000],ans;

int main()
{
	cin>>n;
	
	while(n--)
	{
		cin>>p;
		
		int mn=INT_MAX;
		
		for(int i=0;i<p;i++)
		{
			cin>>a[i];
		}
		
		sort(a,a+p);
		
		for(int i=0;i<p;i++)
		{
			ans=0;
			
			for(int j=0;j<p;j++)
				{
					
					ans+=abs(a[i]-a[j]);
			
				}
			
			mn=min(mn,ans);
			
		}
		
		cout<<mn<<endl;
	}
}
