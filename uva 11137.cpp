#include <bits/stdc++.h>

using namespace std;

#define ll long long
ll coin[] = {1, 8, 27, 64, 125, 216, 343, 512, 729, 1000, 1331, 1728, 2197, 2744, 3375, 4096, 4913, 5832, 6859, 8000, 9261};
ll dp[22][10001];



ll call(int i, int amount){
    if(i>=21)
    {
        if(amount==0) return 1;
        else return 0;
    }

    if(dp[i][amount]!=-1)
        return dp[i][amount];
    ll ret1=0, ret2=0;
    if((amount-coin[i])>=0)
        ret1 = call(i, amount-coin[i]);

    ret2 = call(i+1, amount);

    return dp[i][amount] = ret1 + ret2;
}

int main()
{
    int make;

    memset(dp,-1,sizeof(dp));

    while(cin >> make){
        cout << call(0, make) << endl;
    }
    return 0;
}
