#include<bits/stdc++.h>
using namespace std;

char c[1000];
int cont;

int main()
{
    while(gets(c))
    {
        for(int i=0;c[i];i++)
        {
            if(isalpha(c[i]) && !isalpha(c[i+1]))
                cont++;
        }
        cout<<cont<<endl;
        cont=0;
    }

}
