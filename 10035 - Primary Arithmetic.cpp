#include<bits/stdc++.h>
using namespace std;

int add,carry,a,b,rem_a,rem_b;

int main()
{
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
            carry=0;
            add=0;
        while(a>0 || b>0)
        {
            rem_a=a%10;
            a=a/10;
            rem_b=b%10;
            b=b/10;
            if(rem_a+rem_b+add>9)
            {
                carry++;
                add=1;
            }
            else
                add=0;
        }
         if(carry==0)
        {
              printf("No carry operation.\n");
        }
        else if(carry==1)
        {
            printf("%d carry operation.\n", carry);
        }
        else
        {
             printf("%d carry operations.\n", carry);
        }
    }
}
