#include <bits/stdc++.h>

using namespace std;

int t, n,q,p,r,cnt;;

int main()
{
    cin>>t;
    
    while (t--)
    {
        cin>>n;
        
        int a[n+1]={0};
        
        cin>>p;
        
        cnt=0;
        
        while (p--)
        {
            cin>>q;
            
            for (int i=q;i<=n;i+=q)
            {
                r=i%7;
                
                if (a[i]==0 && r!=0 && r!=6)
                {
                    cnt++;
                    
                    a[i]=1;
                }
            }
        }
       
       cout<<cnt<<endl; 
    }
    
    return 0;
}
