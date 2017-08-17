#include<bits/stdc++.h>
using namespace std;

int n;
string a;

int main()
{
        cin>>n;
        while(n--)
        {
                cin>>a;
                if(a=="1"||a=="4"||a=="78")
                        cout<<"+"<<endl;
                else if(*(a.end()-1)=='5'&&*(a.end()-2)=='3')
                        cout<<"-"<<endl;
                else if(a[0]=='9'&&*(a.end()-1)=='4')
                        cout<<"*"<<endl;
                else
                        cout<<"?"<<endl;
        }
}
