#include <bits/stdc++.h>

using namespace std;

long long n,rev,temp, cnt,t;

int main()
{
    cin>>t;
    
        while(t--)
        {
            cnt=0;
            
            cin>>n;
            
            while(1)
            {
            temp=n;
            
            rev=0;
            
            while(n)
            {
                rev=rev*10+n%10;
                
                n=n/10;
            }
            
            if(rev==temp)
            {
                cout<<cnt<<" "<<temp<<endl;
                
                break;
            }
            
            else
               {
				n=temp+rev;
				
                cnt++;
                }
            }
        }
}
